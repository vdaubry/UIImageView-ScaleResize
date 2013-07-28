UIImageView-ScaleResize
=======================

A category to scale an image and align it to the bottom


Also deals with the problem of disk caching with the category from AfNetworking. See this issue : https://github.com/AFNetworking/AFNetworking/pull/1136

This category will scale and fit an image and align it to the bottom.
It also allows to download from the Network using either AFNetworking (for performance) or SDWebimage (for reliable disk caching)


* To download with AFNetworking using NSURLCache use : ```setImageWithURL:placeholderImage:imgSize:```
* To download with SDWebImage using their custom disk cache use : ```setOfflineImageWithURL:placeholderImage:imgSize:```


## License 

This template is available under the MIT license. See the license file for more details.