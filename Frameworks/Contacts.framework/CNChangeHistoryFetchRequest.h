/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryFetchRequest : NSObject <NSSecureCoding> {
    NSString * _clientIdentifier;
    bool  _contactChanges;
    bool  _groupChanges;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic) bool contactChanges;
@property (nonatomic) bool groupChanges;

+ (bool)supportsSecureCoding;

- (id)clientIdentifier;
- (bool)contactChanges;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)groupChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setContactChanges:(bool)arg1;
- (void)setGroupChanges:(bool)arg1;

@end
