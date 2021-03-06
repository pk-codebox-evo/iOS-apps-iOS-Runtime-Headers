/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficSegment : PBCodable <NSCopying> {
    struct { 
        unsigned int speed : 1; 
        unsigned int width : 1; 
    } _has;
    int _speed;
    int _vertexCount;
    int _vertexOffset;
    int _width;
}

@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) int speed;
@property (nonatomic) int vertexCount;
@property (nonatomic) int vertexOffset;
@property (nonatomic) int width;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSpeed;
- (BOOL)hasWidth;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasSpeed:(BOOL)arg1;
- (void)setHasWidth:(BOOL)arg1;
- (void)setSpeed:(int)arg1;
- (void)setVertexCount:(int)arg1;
- (void)setVertexOffset:(int)arg1;
- (void)setWidth:(int)arg1;
- (int)speed;
- (int)vertexCount;
- (int)vertexOffset;
- (int)width;
- (void)writeTo:(id)arg1;

@end
