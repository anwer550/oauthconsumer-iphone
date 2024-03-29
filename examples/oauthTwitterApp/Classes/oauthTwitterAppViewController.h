/**
 Copyright 2010 Charles Y. Choi, Yummy Melon Software LLC
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/ 

#import <UIKit/UIKit.h>
#import "OAuthConsumer.h"
#import "AuthorizeWebViewController.h"

#define kConsumerKey @"insert your key here"
#define kConsumerSecret @"insert your secret here"

#define kAppProviderName @"yourdomain.com"
#define kAppPrefix @"twitter_app"


@interface oauthTwitterAppViewController : UIViewController 
<AuthorizeWebViewControllerDelegate>
{
    OAConsumer *consumer;
    OAToken *accessToken;

    UITextField *message;
    UIButton *sendButton;
    UIButton *authenticateButton;
}

@property (nonatomic, retain) OAConsumer *consumer;
@property (nonatomic, retain) OAToken *accessToken;
@property (nonatomic, retain) IBOutlet UITextField *message;
@property (nonatomic, retain) IBOutlet UIButton *sendButton;
@property (nonatomic, retain) IBOutlet UIButton *authenticateButton;

- (IBAction)sendButtonAction;
- (IBAction)authenticateButtonAction;

@end

