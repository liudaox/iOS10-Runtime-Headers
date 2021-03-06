/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPImage : NSObject <NSSecureCoding> {
    NSString * _MIMEType;
    NSData * _data;
    NSURL * _fileURL;
    UIImage * _originalPlatformImage;
    bool  _placeholderIcon;
    UIImage * _platformImage;
}

@property (nonatomic, readonly, copy) NSString *MIMEType;
@property (nonatomic, readonly) unsigned long long _encodedSize;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, retain) NSURL *fileURL;
@property (getter=isPlaceholderIcon, nonatomic) bool placeholderIcon;
@property (nonatomic, retain) UIImage *platformImage;

+ (id)_PNGImageNamed:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (void)_createDataFromPlatformImage;
- (unsigned long long)_encodedSize;
- (id)_initWithImage:(id)arg1;
- (void)_mapDataFromFileURL;
- (bool)_shouldEncodeData;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)init;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2;
- (id)initWithPlatformImage:(id)arg1;
- (bool)isPlaceholderIcon;
- (id)platformImage;
- (void)setFileURL:(id)arg1;
- (void)setPlaceholderIcon:(bool)arg1;
- (void)setPlatformImage:(id)arg1;

@end
