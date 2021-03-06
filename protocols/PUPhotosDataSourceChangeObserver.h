/* Generated by RuntimeBrowser.
 */

@protocol PUPhotosDataSourceChangeObserver <NSObject>

@optional

- (void)photosDataSource:(PUPhotosDataSource *)arg1 didChange:(PUPhotosDataSourceChange *)arg2;
- (void)photosDataSource:(PUPhotosDataSource *)arg1 didReceivePhotoLibraryChange:(PHChange *)arg2;
- (NSArray *)photosDataSourceInterestingAssetReferences:(PUPhotosDataSource *)arg1;
- (void)photosDataSourceWillChange:(PUPhotosDataSource *)arg1;

@end
