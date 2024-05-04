async function initMap() {

    const gmap = document.getElementById("gmap");
    let bounds = new google.maps.LatLngBounds();
    const map = new google.maps.Map(gmap)
    let nr = 1;
    
    map.setCenter(bounds.getCenter());
    map.fitBounds(bounds);
    map.setZoom(map.getZoom());
    if(map.getZoom() > 15) map.setZoom(15);

    locationsArray.forEach(location => {
        bounds.extend({lat: location.latitude, lng: location.longitude})
        let marker = new google.maps.Marker({
            position: {lat: location.latitude, lng: location.longitude},
            map: map,
            label: ""+nr
        });
        let infoWindow = new google.maps.InfoWindow({
            content: location.info,
        });
        marker.addListener("click", () => {
            infoWindow.open({
                anchor: marker,
                map
            });
        });
        nr++;
    });
}
