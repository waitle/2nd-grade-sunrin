from django.conf.urls import include, url
from django.contrib import admin

urlpatterns = [
    url(r'^root/', admin.site.urls),
    url(r'',include('firstapp.urls')),


]

