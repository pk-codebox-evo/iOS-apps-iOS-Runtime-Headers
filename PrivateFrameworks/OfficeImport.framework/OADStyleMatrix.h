/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADStyleMatrix : NSObject {
    NSMutableArray *mBgFills;
    NSMutableArray *mEffects;
    NSMutableArray *mFills;
    NSString *mName;
    NSMutableArray *mStrokes;
}

@property (nonatomic, copy) NSString *name;

+ (id)objectInArray:(id)arg1 withPossiblyOutOfRangeIndex:(unsigned int)arg2 defaultValue:(id)arg3;

- (void)addBgFill:(id)arg1;
- (void)addEffects:(id)arg1;
- (void)addFill:(id)arg1;
- (void)addStroke:(id)arg1;
- (id)bgFillAtIndex:(unsigned int)arg1;
- (unsigned int)bgFillCount;
- (void)dealloc;
- (id)description;
- (id)effectsAtIndex:(unsigned int)arg1;
- (id)effectsAtIndex:(unsigned int)arg1 color:(id)arg2;
- (unsigned int)effectsCount;
- (id)fillAtIndex:(unsigned int)arg1;
- (id)fillAtIndex:(unsigned int)arg1 color:(id)arg2;
- (unsigned int)fillCount;
- (id)init;
- (bool)isEmpty;
- (id)name;
- (void)padArray:(id)arg1 withContentsOfArray:(id)arg2;
- (void)setName:(id)arg1;
- (id)strokeAtIndex:(unsigned int)arg1;
- (id)strokeAtIndex:(unsigned int)arg1 color:(id)arg2;
- (unsigned int)strokeCount;
- (void)validateStyleMatrix;

@end
