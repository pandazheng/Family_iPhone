//
//  DDAlertPrompt.h
//  DDAlertPrompt (Released under MIT License)
//
//  Created by digdog on 10/27/10.
//  Copyright 2010 Ching-Lan 'digdog' HUANG. http://digdog.tumblr.com
//
//  Permission is hereby granted, free of charge, to any person obtaining
//  a copy of this software and associated documentation files (the
//  "Software"), to deal in the Software without restriction, including
//  without limitation the rights to use, copy, modify, merge, publish,
//  distribute, sublicense, and/or sell copies of the Software, and to
//  permit persons to whom the Software is furnished to do so, subject to
//  the following conditions:
//   
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//   
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
//  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
//  OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
//  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <UIKit/UIKit.h>

@protocol DDAlertPromptDelegate;


@interface DDAlertPrompt : UIAlertView <UITableViewDelegate, UITableViewDataSource> {
	@private
	UITableView *tableView_;
	UITextField *plainTextField_;
	UITextField *secretTextField_;
}

@property(nonatomic, retain, readonly) UITextField *plainTextField;
@property(nonatomic, retain, readonly) UITextField *secretTextField;

- (id)initWithTitle:(NSString *)title delegate:(id /*<UIAlertViewDelegate>*/)delegate cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitle:(NSString *)otherButtonTitles;

@property(nonatomic, retain) UITextView  *theTextView;

@property (nonatomic, assign) id<DDAlertPromptDelegate>DDAlertDelegate;

@end


@protocol DDAlertPromptDelegate <NSObject>
@optional
- (void)userPressedTheCancelBtn:(DDAlertPrompt*)alert;

@end


