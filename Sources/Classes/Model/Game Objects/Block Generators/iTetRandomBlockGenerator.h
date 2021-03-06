//
//  iTetRandomBlockGenerator.h
//  iTetrinet
//
//  Created by Alex Heinz on 7/9/10.
//  Copyright (c) 2010-2011 Alex Heinz (xale@acm.jhu.edu)
//  This is free software, presented under the MIT License
//  See the included license.txt for more information
//

#import <Cocoa/Cocoa.h>

@class iTetBlock;

@interface iTetRandomBlockGenerator : NSObject
{
	NSArray* blockFrequencies;
}

- (id)initWithBlockFrequencies:(NSArray*)frequencies;

- (iTetBlock*)generateNextBlock;

@end
