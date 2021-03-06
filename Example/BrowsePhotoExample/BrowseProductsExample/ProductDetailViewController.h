//
//  ProductDetailViewController.h
//  Bazaarvoice SDK - Demo Application
//
//  Copyright 2015 Bazaarvoice Inc. All rights reserved.
//
//
//  UIViewController for displaying a list of products for a given search
//  term.


#import <UIKit/UIKit.h>
#import <BVSDK/BVSDK.h>

@interface ProductDetailViewController : UIViewController<BVDelegate, UITableViewDelegate, UITableViewDataSource>

// UIViews for product properties
@property (weak, nonatomic) IBOutlet UILabel *productTitle;
@property (weak, nonatomic) IBOutlet UIImageView *productImage;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *ratingLabel;

// Table of product reviews
@property (weak, nonatomic) IBOutlet UITableView *reviewsTable;

// External property for passing product data to this view
@property (strong, nonatomic) NSDictionary *productData;
// Internal property for storing product review data
@property (strong, nonatomic) NSArray *reviewsData;

@property (strong, nonatomic) BVGet *productRequest;

@end
