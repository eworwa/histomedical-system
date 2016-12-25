(function($) {
Drupal.behaviors.at_histomedical = {
  attach: function (context, settings) {
    var items = {
      casa :'fa fa-home',
      calendario : 'fa fa-calendar',
      grafica : 'fa fapie-chart',
      ficha : 'fa fa-file-text',
      teclado : 'fa fa-keyboard-o',
      computador : 'fa fa-desktop',
      mi_cuenta : 'fa fa-user',
      usuarios : 'fa fa-users',
      video : 'fa fa-video-camera',
      hoja : 'fa fa-file',
      laboratorio : 'fa fa-heartbeat',
      pacientes : 'fa fa-wheelchair',
      consultas : 'fa fa-user-md',
      preguntas : 'fa fa-question-circle',
      contactos : 'fa fa-volume-control-phone',
      audifono : 'fa fa-headphones',
      salir : 'fa fa-sign-out',
      clip : 'fa fa-paperclip',
      ayuda : 'fa fa-wrench',
    }

    $('.block ul.menu li, .sf-menu li').mouseover(function() {
      $(this).addClass('ul_li_hover');

    });
	
    $('.block ul.menu li, .sf-menu li').mouseout(function() {
      $(this).removeClass('ul_li_hover');
    });
	
    $('.block ul.menu li ul li, .sf-menu li ul li').mouseover(function() {
      $(this).parents('li').addClass('ul_li_hover');
	});

    for (key in items) {
      if ($('#block-system-main-menu, .block-superfish, .mean-nav .menu').find('a').hasClass('menu-item-' + key)) {
        $('#block-system-main-menu, .block-superfish .menu-item-' + key).parent().addClass(items[key] + ' icon-cog').attr('aria-hidden', 'true');
        $('.mean-nav .menu .menu-item-' + key).addClass(items[key] + ' icon-cog').attr('aria-hidden', 'true');
        if ($('#block-system-main-menu .menu-item-' + key + ', .block-superfish .menu-item-' + key + ', .mean-nav .menu .menu-item-' + key).hasClass('active')) {
          $('#block-system-main-menu .menu-item-' + key  + ', .block-superfish .menu-item-' + key + ', .mean-nav .menu .menu-item-' + key).parent().css({'color':'#fff'});
        }

      }
    }

    if ($('#admin-menu')) {
      $('.mean-container .mean-bar').css({'top':'70px'});
      $('.region-header').css({'min-height': '70px'});
      if ($('#breadcrumb')) {
        $('.adslist').css({'margin-top': '80px'});
      }
    }

    $('.mean-container .meanmenu-reveal').click(function() {
      $(this).prev('#op-menu-nav').remove();
      $(this).before('<span id="op-menu-nav"></span>');
      $(this).prev().addClass('fa fa-times');
      if (!$(this).hasClass('meanclose')) {
        $(this).prev().removeClass('fa-times');
      }
      else {
        $(this).text('');
        $(this).prev().css({'float':'right'});
      }
    });

    //load menu
    $('.sf-menu li.active-trail ul').removeClass('sf-hidden ');
    $('.sf-menu li.active-trail').addClass('sfHover');

    $('#block-system-main-menu').css('padding-bottom', ($('#main-content').offset().top + 98) + 'px');

    if($('#branding').hasClass('no-logo') && $('#branding').hasClass('site-name-hidden') && $('#branding').hasClass('no-slogan')) {
      $('#header-wrapper header').hide();
    }
    //agregando otros iconos
    $('#block-views-usuarios-block-1 .field-content').addClass(items['mi_cuenta']).attr('aria-hidden', 'true');

    $('h1').parent().addClass('fa fa-tags').attr('aria-hidden', 'true').css({'width':'100%', 'background':'#595f69', 'border-radius': '4px 4px 0 0', 'color': '#f1f1f1', 'padding-top': '12px'});
    $('#breadcrumb li.crumb-first').addClass(items['casa'] + ' icon-cog').attr('aria-hidden', 'true');
    $('#block-menu-menu-documentos-legales ul li').addClass('icon-cog');
    $('#block-menu-menu-documentos-legales ul li').addClass('fa fa-angle-right').attr('aria-hidden', 'true');
    $('#breadcrumb .crumb-separator').addClass('fa fa-angle-right fa-lg').text('').attr('aria-hidden', 'true');
    $('#content ul:not(:pager) > li').addClass('fa fa-angle-right').attr('aria-hidden', 'true');
  }
};
})(jQuery);
