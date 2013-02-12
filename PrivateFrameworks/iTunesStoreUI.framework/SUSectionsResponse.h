/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSDictionary;

@interface SUSectionsResponse : NSObject {
    BOOL _cacheable;
    NSInteger _responseType;
    NSArray *_sections;
    NSDictionary *_sectionsDictionary;
    BOOL _shouldResetUserOrdering;
}

@property(readonly) NSString *moreListTitle;
@property(readonly) NSArray *sections;
@property(readonly) NSDictionary *sectionsDictionary;
@property(readonly) NSString *versionString;
@property(getter=isCacheable) BOOL cacheable;
@property(readonly) NSInteger responseType;
@property BOOL shouldResetUserOrdering;

- (id)_newSectionsFromDictionary:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSectionsDictionary:(id)arg1 responseType:(NSInteger)arg2;
- (BOOL)isCacheable;
- (id)moreListTitle;
- (NSInteger)responseType;
- (id)sections;
- (id)sectionsDictionary;
- (void)setCacheable:(BOOL)arg1;
- (void)setShouldResetUserOrdering:(BOOL)arg1;
- (BOOL)shouldResetUserOrdering;
- (id)versionString;

@end