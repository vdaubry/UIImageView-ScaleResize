//
//  ImageViewScaledAndAlignedAtBottom.h
//  Youboox
//
//  Created by Vincent Daubry on 23/04/13.
//
//

#import <UIKit/UIKit.h>

@interface UIImageView (Youboox)

- (void)setOfflineImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage imgSize:(CGSize)size;

- (void)setImageWithURL:(NSURL *)url placeholderImage:(UIImage *)placeholderImage imgSize:(CGSize)size;

@end
