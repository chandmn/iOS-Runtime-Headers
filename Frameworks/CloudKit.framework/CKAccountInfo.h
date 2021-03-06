/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAccountInfo : NSObject <NSCopying, NSSecureCoding> {
    BOOL  _accountWantsPushRegistration;
    NSString * _email;
    BOOL  _isUnitTestingAccount;
    NSString * _password;
    NSString * _secondEmail;
}

@property (nonatomic) BOOL accountWantsPushRegistration;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic) BOOL isUnitTestingAccount;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, copy) NSString *secondEmail;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (BOOL)accountWantsPushRegistration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmail:(id)arg1 password:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUnitTestingAccount;
- (id)password;
- (id)secondEmail;
- (void)setAccountWantsPushRegistration:(BOOL)arg1;
- (void)setIsUnitTestingAccount:(BOOL)arg1;
- (void)setSecondEmail:(id)arg1;

@end
