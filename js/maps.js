(function( $ ) {
  'use strict';

  $(document).ready(function(){
	  
    //
    // Google Map
    var mapLocation = new google.maps.LatLng(30.769901, 103.989998); //change coordinates here
    var marker;
    var map;

    function initialize() {
      var mapOptions = {
        zoom: 18, //change zoom here
        center: mapLocation,
        scrollwheel: true,
        styles: [{"featureType":"water","elementType":"geometry","stylers":[{"color":"#e9e9e9"},{"lightness":17}]},{"featureType":"landscape","elementType":"geometry","stylers":[{"color":"#f5f5f5"},{"lightness":20}]},{"featureType":"road.highway","elementType":"geometry.fill","stylers":[{"color":"#ffffff"},{"lightness":17}]},{"featureType":"road.highway","elementType":"geometry.stroke","stylers":[{"color":"#ffffff"},{"lightness":29},{"weight":0.2}]},{"featureType":"road.arterial","elementType":"geometry","stylers":[{"color":"#ffffff"},{"lightness":18}]},{"featureType":"road.local","elementType":"geometry","stylers":[{"color":"#ffffff"},{"lightness":16}]},{"featureType":"poi","elementType":"geometry","stylers":[{"color":"#f5f5f5"},{"lightness":21}]},{"featureType":"poi.park","elementType":"geometry","stylers":[{"color":"#dedede"},{"lightness":21}]},{"elementType":"labels.text.stroke","stylers":[{"visibility":"on"},{"color":"#ffffff"},{"lightness":16}]},{"elementType":"labels.text.fill","stylers":[{"saturation":36},{"color":"#333333"},{"lightness":40}]},{"elementType":"labels.icon","stylers":[{"visibility":"off"}]},{"featureType":"transit","elementType":"geometry","stylers":[{"color":"#f2f2f2"},{"lightness":19}]},{"featureType":"administrative","elementType":"geometry.fill","stylers":[{"color":"#fefefe"},{"lightness":20}]},{"featureType":"administrative","elementType":"geometry.stroke","stylers":[{"color":"#fefefe"},{"lightness":17},{"weight":1.2}]}]

      };

      map = new google.maps.Map(document.getElementById('map'),
        mapOptions);

      // Replace with your data
      var contentString = '<div class="map-info-box">'
        + '<p class="map-address"><i class="icon ion-ios-location"></i> Chengdu, China<br><i class="icon ion-ios-telephone"></i> 159 4610 9336<br><i class="icon ion-email"></i> <a href="mailto:846972585@qq.com">846972585@qq.com</a></p>'

      var infowindow = new google.maps.InfoWindow({
        content: contentString
      });

      var image = 'images/marker.png';
      marker = new google.maps.Marker({
        map: map,
        draggable: true,
        title: '团队位置', //change title here
        icon: image,
        animation: google.maps.Animation.DROP,
        position: mapLocation
      });

      google.maps.event.addListener(marker, 'click', function() {
        infowindow.open(map, marker);
      });
    }

    google.maps.event.addDomListener(window, 'load', initialize);

    //


  })

})(window.jQuery);