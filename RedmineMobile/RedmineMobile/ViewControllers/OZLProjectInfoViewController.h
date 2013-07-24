//
//  OZLProjectInfoViewController.h
//  RedmineMobile
//
//  Created by lizhijie on 7/16/13.

// This code is distributed under the terms and conditions of the MIT license.

// Copyright (c) 2013 Zhijie Lee(onezeros.lee@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>
#import "OZLModelProject.h"

typedef enum {
	OZLProjectInfoViewModeCreate,
    OZLProjectInfoViewModeDisplay,
    OZLProjectInfoViewModeEdit
} OZLProjectInfoViewMode;


@interface OZLProjectInfoViewController : UITableViewController
- (IBAction)onCancel:(id)sender;
- (IBAction)onSave:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *identifier;
@property (weak, nonatomic) IBOutlet UITextField *homepageUrl;
@property (weak, nonatomic) IBOutlet UITextView *description;
@property (nonatomic) BOOL isPublic;
@property (nonatomic,strong) OZLModelProject* parentProject;
@property (nonatomic,strong) NSArray* projectList;

@property (nonatomic, strong) OZLModelProject* projectData;
@property (nonatomic) OZLProjectInfoViewMode viewMode;

@end