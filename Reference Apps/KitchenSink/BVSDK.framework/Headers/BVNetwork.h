//
//  BVNetwork.h
//  BazaarvoiceSDK
//
//  Single entrypoint for all networking code.  BVGet, BVPost and
//  BVMedia post leverage this class to make requests.  Should not
//  be client facing.
//
//  Created by Bazaarvoice Engineering on 11/27/12.
//
//  Licensed to the Apache Software Foundation (ASF) under one
//  or more contributor license agreements.  See the NOTICE file
//  distributed with this work for additional information
//  regarding copyright ownership.  The ASF licenses this file
//  to you under the Apache License, Version 2.0 (the
//  "License"); you may not use this file except in compliance
//  with the License.  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing,
//  software distributed under the License is distributed on an
//  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
//  KIND, either express or implied.  See the License for the
//  specific language governing permissions and limitations
//  under the License.
//

#import <Foundation/Foundation.h>
#import "BVDelegate.h"

#define SDK_HEADER_NAME @"X-UA-BV-SDK"
#define SDK_HEADER_VALUE @"IOS_SDK_V213"

@interface BVNetwork : NSObject<NSURLConnectionDataDelegate>

- (id)initWithSender:(id)sender;

@property (weak) id<BVDelegate> delegate;
@property (strong) id sender;

- (void)setUrlParameterWithName:(NSString *)name value:(id)value;
- (void)setUrlListParameterWithName:(NSString *)name value:(NSString *)value;
- (void)addUrlParameterWithName:(NSString *)name value:(NSString *)value;
- (void)addNthUrlParameterWithName:(NSString *)name value:(NSString *)value;

- (void)sendGetWithEndpoint:(NSString *)endpoint;
- (void)sendPostWithEndpoint:(NSString *)endpoint;
- (void)sendMultipartPostWithEndpoint:(NSString *)endpoint;

@end