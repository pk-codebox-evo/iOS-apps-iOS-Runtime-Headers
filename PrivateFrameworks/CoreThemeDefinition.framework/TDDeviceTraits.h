/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDDeviceTraits : NSObject {
    int _graphicsFeatureSetClassValue;
    NSArray *_graphicsFeatureSetFallbackValues;
    int _graphicsPerformanceClass;
    NSArray *_hostedIdiomValues;
    int _idiomValue;
    int _memoryPerformanceClass;
    float _scale;
    int _sizeClassHorizontal;
    int _sizeClassVertical;
    int _subtype;
}

@property (nonatomic) NSString *graphicsFeatureSetClass;
@property (nonatomic) int graphicsFeatureSetClassValue;
@property (nonatomic, copy) NSArray *graphicsFeatureSetFallbackValues;
@property (nonatomic) NSArray *graphicsFeatureSetFallbacks;
@property (nonatomic) int graphicsPerformanceClass;
@property (nonatomic, copy) NSArray *hostedIdiomValues;
@property (nonatomic) NSArray *hostedIdioms;
@property (nonatomic) NSString *idiom;
@property (nonatomic) int idiomValue;
@property (nonatomic) int memoryPerformanceClass;
@property (nonatomic) float scale;
@property (nonatomic) int subtype;

- (int)_graphicsFeatureSetClassFromTraitString:(id)arg1;
- (id)_graphicsFeatureSetClassToTraitString:(int)arg1;
- (int)_idiomFromTraitString:(id)arg1;
- (id)_idiomToTraitString:(int)arg1;
- (void)dealloc;
- (id)graphicsFeatureSetClass;
- (int)graphicsFeatureSetClassValue;
- (id)graphicsFeatureSetFallbackValues;
- (id)graphicsFeatureSetFallbacks;
- (int)graphicsPerformanceClass;
- (id)hostedIdiomValues;
- (id)hostedIdioms;
- (id)idiom;
- (int)idiomValue;
- (int)memoryPerformanceClass;
- (float)scale;
- (void)setGraphicsFeatureSetClass:(id)arg1;
- (void)setGraphicsFeatureSetClassValue:(int)arg1;
- (void)setGraphicsFeatureSetFallbackValues:(id)arg1;
- (void)setGraphicsFeatureSetFallbacks:(id)arg1;
- (void)setGraphicsPerformanceClass:(int)arg1;
- (void)setHostedIdiomValues:(id)arg1;
- (void)setHostedIdioms:(id)arg1;
- (void)setIdiom:(id)arg1;
- (void)setIdiomValue:(int)arg1;
- (void)setMemoryPerformanceClass:(int)arg1;
- (void)setScale:(float)arg1;
- (void)setSubtype:(int)arg1;
- (int)subtype;

@end
