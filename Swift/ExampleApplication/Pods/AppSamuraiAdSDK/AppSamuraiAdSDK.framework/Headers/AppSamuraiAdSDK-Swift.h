// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import WebKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AppSamuraiAdSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC15AppSamuraiAdSDK11ASAdRequest")
@interface ASAdRequest : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;

SWIFT_CLASS("_TtC15AppSamuraiAdSDK16ASAdRequestError")
@interface ASAdRequestError : NSError
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithDomain:(NSString * _Nonnull)domain code:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)dict SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC15AppSamuraiAdSDK8ASAdSize")
@interface ASAdSize : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ASAdSize * _Nonnull asAdSizeInvalid;)
+ (ASAdSize * _Nonnull)asAdSizeInvalid SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ASAdSize * _Nonnull asAdSizeBanner;)
+ (ASAdSize * _Nonnull)asAdSizeBanner SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ASAdSize * _Nonnull asAdSizeLargeBanner;)
+ (ASAdSize * _Nonnull)asAdSizeLargeBanner SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ASAdSize * _Nonnull asAdSizeMediumRectangle;)
+ (ASAdSize * _Nonnull)asAdSizeMediumRectangle SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ASAdSize * _Nonnull asAdSizeFullBanner;)
+ (ASAdSize * _Nonnull)asAdSizeFullBanner SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ASAdSize * _Nonnull asAdSizeLeaderboard;)
+ (ASAdSize * _Nonnull)asAdSizeLeaderboard SWIFT_WARN_UNUSED_RESULT;
@end

@protocol ASBannerViewDelegate;
@class UIViewController;
@class WKWebView;
@class WKNavigationAction;

SWIFT_CLASS_NAMED("ASBannerView")
@interface ASBannerView : UIView <WKNavigationDelegate>
@property (nonatomic, copy) NSString * _Nullable adUnitID;
@property (nonatomic, strong) ASAdSize * _Nonnull adSize;
@property (nonatomic, strong) id <ASBannerViewDelegate> _Nullable delegate;
@property (nonatomic, strong) UIViewController * _Nullable rootViewController;
@property (nonatomic) BOOL isAutoloadEnabled;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nonnull instancetype)initWithAdSize:(ASAdSize * _Nonnull)adSize;
- (nonnull instancetype)initWithAdSize:(ASAdSize * _Nonnull)adSize origin:(CGPoint)origin;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)loadAdWithAdRequest:(ASAdRequest * _Nonnull)adRequest;
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
@end


SWIFT_PROTOCOL("_TtP15AppSamuraiAdSDK20ASBannerViewDelegate_")
@protocol ASBannerViewDelegate
@optional
- (void)adViewDidReceiveAd:(ASBannerView * _Nonnull)asBannerView;
- (void)adViewDidFailToReceiveAd:(ASBannerView * _Nonnull)asBannerView error:(ASAdRequestError * _Nonnull)error;
- (void)adViewWillLeaveApplication:(ASBannerView * _Nonnull)asBannerView;
@end

@protocol ASInterstitialDelegate;

SWIFT_CLASS("_TtC15AppSamuraiAdSDK14ASInterstitial")
@interface ASInterstitial : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable adUnitID;
@property (nonatomic, strong) id <ASInterstitialDelegate> _Nullable delegate;
@property (nonatomic, readonly) BOOL isReady;
@property (nonatomic, readonly) BOOL hasBeenUsed;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nonnull instancetype)initWithAdUnitID:(NSString * _Nonnull)adUnitID OBJC_DESIGNATED_INITIALIZER;
- (void)loadAdWithAdRequest:(ASAdRequest * _Nullable)adRequest;
- (void)presentWithRootViewController:(UIViewController * _Nonnull)rootViewController;
@end


SWIFT_PROTOCOL("_TtP15AppSamuraiAdSDK22ASInterstitialDelegate_")
@protocol ASInterstitialDelegate
@optional
- (void)interstitialDidReceiveAd:(ASInterstitial * _Nonnull)asInterstitial;
- (void)interstitialDidFailToReceiveAd:(ASInterstitial * _Nonnull)asInterstitial error:(ASAdRequestError * _Nonnull)error;
- (void)interstitialWillPresentScreen:(ASInterstitial * _Nonnull)asInterstitial;
- (void)interstitialWillDismissScreen:(ASInterstitial * _Nonnull)asInterstitial;
- (void)interstitialDidDismissScreen:(ASInterstitial * _Nonnull)asInterstitial;
- (void)interstitialWillLeaveApplication:(ASInterstitial * _Nonnull)asInterstitial;
@end


SWIFT_CLASS("_TtC15AppSamuraiAdSDK11ASMobileAds")
@interface ASMobileAds : NSObject
+ (void)initialize:(NSString * _Nonnull)applicationId;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@protocol ASRewardBasedVideoAdDelegate;

SWIFT_CLASS("_TtC15AppSamuraiAdSDK20ASRewardBasedVideoAd")
@interface ASRewardBasedVideoAd : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable adUnitID;
@property (nonatomic, strong) id <ASRewardBasedVideoAdDelegate> _Nullable delegate;
@property (nonatomic, readonly) BOOL isReady;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
- (nonnull instancetype)initWithAdUnitID:(NSString * _Nonnull)adUnitID OBJC_DESIGNATED_INITIALIZER;
- (void)loadAdWithAdRequest:(ASAdRequest * _Nullable)adRequest;
- (void)presentWithRootViewController:(UIViewController * _Nonnull)rootViewController;
@end


SWIFT_PROTOCOL("_TtP15AppSamuraiAdSDK28ASRewardBasedVideoAdDelegate_")
@protocol ASRewardBasedVideoAdDelegate
- (void)rewardBasedVideoAdDidReward:(ASRewardBasedVideoAd * _Nonnull)asRewardBasedAd;
@optional
- (void)rewardBasedVideoAdDidReceive:(ASRewardBasedVideoAd * _Nonnull)asRewardBasedAd;
- (void)rewardBasedVideoAdDidFailToReceiveAd:(ASRewardBasedVideoAd * _Nonnull)asRewardBasedAd error:(ASAdRequestError * _Nonnull)error;
- (void)rewardBasedVideoAdDidOpen:(ASRewardBasedVideoAd * _Nonnull)asRewardBasedAd;
- (void)rewardBasedVideoAdDidClose:(ASRewardBasedVideoAd * _Nonnull)asRewardBasedAd;
- (void)rewardBasedVideoAdStartPlaying:(ASRewardBasedVideoAd * _Nonnull)asRewardBasedAd;
- (void)rewardBasedVideoAdCompletePlaying:(ASRewardBasedVideoAd * _Nonnull)asRewardBasedAd;
- (void)rewardBasedVideoAdWillLeaveApplication:(ASRewardBasedVideoAd * _Nonnull)asRewardBasedAd;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop