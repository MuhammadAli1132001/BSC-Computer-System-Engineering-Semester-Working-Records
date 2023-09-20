//alert("ali");
$(document).ready(function() {
    $('#color-change-button').click(function() {
      var newColorword = $('#input-colorname').val();
      $('body').html(function(i, oldHtml) {
        return oldHtml.replace(/White/g, newColorword);
      });
    });
  });
  