#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class CommonKotlinx_coroutines_coreCoroutineDispatcher, CommonResult<__covariant R>, CommonCoroutineUseCase<__contravariant P, R>, CommonEvent, CommonKotlinUnit, CommonKotlinPair<__covariant A, __covariant B>, CommonFlowUseCase<__contravariant P, R>, CommonUser, CommonPayment, CommonCategoryEstablishment, CommonFirebase_authAuthCredential, CommonFirebase_authFirebaseUser, CommonAdvert, CommonCategoryEvent, CommonEstablishment, CommonPromotion, CommonSubCategoryEstablishment, CommonLikeContent, CommonVerificationState, CommonWeekday, CommonLikeContentType, CommonKotlinEnumCompanion, CommonKotlinEnum<E>, CommonKotlinArray<T>, CommonAdvertInfo, CommonKoin_coreKoin, CommonAppViewModels, CommonHomeViewModel, CommonKotlinException, CommonResultError, CommonKotlinNothing, CommonResultLoading, CommonResultSuccess<__covariant T>, CommonFirebase_firestoreFirebaseFirestore, CommonFirebase_authFirebaseAuth, CommonHomeState, CommonGetCurrentUserUseCase, CommonFindAllEventUseCase, CommonFindAllEstablishmentUseCase, CommonFindAllAdvertUseCase, CommonFindAllPromotionUseCase, FIRQuery, CommonFirebase_firestoreQuerySnapshot, CommonFirebase_firestoreQuery, FIRCollectionReference, CommonFirebase_firestoreDocumentReference, CommonFirebase_firestoreCollectionReference, FIRDocumentReference, CommonFirebase_firestoreDocumentSnapshot, CommonFirebase_firestoreFieldPath, CommonKoin_coreModule, CommonKotlinAbstractCoroutineContextElement, CommonKotlinx_coroutines_coreCoroutineDispatcherKey, CommonKotlinThrowable, CommonKotlinRuntimeException, CommonKotlinIllegalStateException, FIRAuthCredential, CommonFirebase_authAuthTokenResult, CommonFirebase_authAuthResult, CommonFirebase_authActionCodeSettings, CommonFirebase_authPhoneAuthCredential, FIRUser, CommonFirebase_authUserMetaData, CommonFirebase_authMultiFactor, CommonFirebase_authUserInfo, CommonKoin_coreScope, CommonKoin_coreParametersHolder, CommonKotlinLazyThreadSafetyMode, CommonKoin_coreLogger, CommonKoin_coreInstanceRegistry, CommonKoin_corePropertyRegistry, CommonKoin_coreScopeRegistry, FIRFirestore, CommonFirebase_firestoreWriteBatch, CommonFirebase_authActionCodeResult, FIRAuth, CommonOrbit_coreContainerSettings, FIRQuerySnapshot, CommonFirebase_firestoreDocumentChange, CommonFirebase_firestoreSnapshotMetadata, FIRDocumentSnapshot, FIRFieldPath, CommonKoin_coreInstanceFactory<T>, CommonKoin_coreScopeDSL, CommonKoin_coreSingleInstanceFactory<T>, CommonKotlinAbstractCoroutineContextKey<B, E>, FIRAuthTokenResult, FIRAuthDataResult, CommonFirebase_authAndroidPackageName, FIRPhoneAuthCredential, FIRUserMetadata, FIRMultiFactor, CommonFirebase_authMultiFactorAssertion, CommonFirebase_authMultiFactorSession, CommonFirebase_authMultiFactorInfo, CommonKoin_coreParametersHolderCompanion, CommonKoin_coreLevel, CommonKoin_coreScopeRegistryCompanion, FIRWriteBatch, FIRDocumentChange, CommonFirebase_firestoreChangeType, FIRSnapshotMetadata, CommonKotlinx_serialization_coreSerializersModule, CommonKotlinx_serialization_coreSerialKind, CommonKoin_coreBeanDefinition<T>, CommonKoin_coreInstanceFactoryCompanion, CommonKoin_coreInstanceContext, FIRMultiFactorAssertion, FIRMultiFactorSession, FIRMultiFactorInfo, CommonKoin_coreKind, CommonKoin_coreCallbacks<T>;

@protocol CommonEventRepository, CommonKotlinx_coroutines_coreFlow, CommonUserRepository, CommonPaymentRepository, CommonCategoryEstablishmentRepository, CommonAuthRepository, CommonAdvertRepository, CommonCategoryEventRepository, CommonEstablishmentRepository, CommonPromotionRepository, CommonSubCategoryEstablishmentRepository, CommonLikeContentRepository, CommonMapper, CommonKotlinComparable, CommonKoin_coreKoinComponent, CommonAdvertDataSource, CommonAuthDataSource, CommonCategoryEstablishmentDataSource, CommonCategoryEventDataSource, CommonEstablishmentDataSource, CommonEventDataSource, CommonLikeContentDataSource, CommonPaymentDataSource, CommonPromotionDataSource, CommonSubCategoryEstablishmentDataSource, CommonUserDataSource, CommonOrbit_coreContainer, CommonOrbit_coreContainerHost, CommonKotlinCoroutineContext, CommonKotlinx_coroutines_coreCoroutineScope, CommonKotlinx_serialization_coreSerializationStrategy, CommonKotlinCoroutineContextKey, CommonKotlinCoroutineContextElement, CommonKotlinContinuation, CommonKotlinContinuationInterceptor, CommonKotlinx_coroutines_coreRunnable, CommonKotlinx_coroutines_coreFlowCollector, CommonKotlinIterator, CommonKoin_coreKoinScopeComponent, CommonKoin_coreQualifier, CommonKotlinKClass, CommonKotlinLazy, CommonKotlinSuspendFunction1, CommonKotlinx_coroutines_coreStateFlow, CommonKotlinx_serialization_coreEncoder, CommonKotlinx_serialization_coreSerialDescriptor, CommonKotlinx_serialization_coreDeserializationStrategy, FIRUserInfo, CommonKoin_coreScopeCallback, CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier, CommonKotlinFunction, CommonOrbit_coreIdlingResource, CommonKotlinx_coroutines_coreCoroutineExceptionHandler, CommonKotlinx_coroutines_coreSharedFlow, CommonKotlinx_serialization_coreCompositeEncoder, CommonKotlinAnnotation, CommonKotlinx_serialization_coreDecoder, CommonKotlinx_serialization_coreSerializersModuleCollector, CommonKotlinx_serialization_coreKSerializer, CommonKotlinx_serialization_coreCompositeDecoder;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface CommonBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface CommonBase (CommonBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface CommonMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface CommonMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorCommonKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface CommonNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface CommonByte : CommonNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface CommonUByte : CommonNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface CommonShort : CommonNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface CommonUShort : CommonNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface CommonInt : CommonNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface CommonUInt : CommonNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface CommonLong : CommonNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface CommonULong : CommonNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface CommonFloat : CommonNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface CommonDouble : CommonNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface CommonBoolean : CommonNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface CommonGreeting : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface CommonPlatform : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("CoroutineUseCase")))
@interface CommonCoroutineUseCase<__contravariant P, R> : CommonBase
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(P _Nullable)parameters completionHandler:(void (^)(R _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeParameters:(P _Nullable)parameters completionHandler:(void (^)(CommonResult<R> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddEventUseCase")))
@interface CommonAddEventUseCase : CommonCoroutineUseCase<CommonEvent *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonEvent *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFavoriteEventUseCase")))
@interface CommonAddFavoriteEventUseCase : CommonCoroutineUseCase<CommonKotlinPair<NSString *, CommonEvent *> *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonKotlinPair<NSString *, CommonEvent *> *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("FlowUseCase")))
@interface CommonFlowUseCase<__contravariant P, R> : CommonBase
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(P _Nullable)parameters __attribute__((swift_name("execute(parameters:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)invokeParameters:(P _Nullable)parameters __attribute__((swift_name("invoke(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindAllEventUseCase")))
@interface CommonFindAllEventUseCase : CommonFlowUseCase<CommonKotlinUnit *, NSArray<CommonEvent *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(CommonKotlinUnit *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindEventByUidCategoryUseCase")))
@interface CommonFindEventByUidCategoryUseCase : CommonFlowUseCase<NSString *, NSArray<CommonEvent *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindEventByUidEstablishmentUseCase")))
@interface CommonFindEventByUidEstablishmentUseCase : CommonFlowUseCase<NSString *, NSArray<CommonEvent *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindEventByUidOwnerUseCase")))
@interface CommonFindEventByUidOwnerUseCase : CommonFlowUseCase<NSString *, NSArray<CommonEvent *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindEventByUidUseCase")))
@interface CommonFindEventByUidUseCase : CommonFlowUseCase<NSString *, CommonEvent *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindFavoriteEventUseCase")))
@interface CommonFindFavoriteEventUseCase : CommonFlowUseCase<NSString *, NSArray<CommonEvent *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveEventUseCase")))
@interface CommonRemoveEventUseCase : CommonCoroutineUseCase<CommonEvent *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonEvent *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveFavoriteEventUseCase")))
@interface CommonRemoveFavoriteEventUseCase : CommonCoroutineUseCase<CommonKotlinPair<NSString *, CommonEvent *> *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonKotlinPair<NSString *, CommonEvent *> *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateEventUseCase")))
@interface CommonUpdateEventUseCase : CommonCoroutineUseCase<CommonEvent *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonEvent *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadImageEventUseCase")))
@interface CommonUploadImageEventUseCase : CommonCoroutineUseCase<NSString *, NSString *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFollowerUseCase")))
@interface CommonAddFollowerUseCase : CommonCoroutineUseCase<CommonKotlinPair<CommonUser *, CommonUser *> *, CommonKotlinUnit *>
- (instancetype)initWithRepository:(id<CommonUserRepository>)repository coroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(repository:coroutineDispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonKotlinPair<CommonUser *, CommonUser *> *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddUserUseCase")))
@interface CommonAddUserUseCase : CommonCoroutineUseCase<CommonUser *, CommonKotlinUnit *>
- (instancetype)initWithRepository:(id<CommonUserRepository>)repository coroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(repository:coroutineDispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonUser *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCurrentUserUseCase")))
@interface CommonGetCurrentUserUseCase : CommonFlowUseCase<NSString *, CommonUser *>
- (instancetype)initWithRepository:(id<CommonUserRepository>)repository dispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFollowerUseCase")))
@interface CommonGetFollowerUseCase : CommonFlowUseCase<NSString *, NSArray<CommonUser *> *>
- (instancetype)initWithRepository:(id<CommonUserRepository>)repository dispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetFollowingUseCase")))
@interface CommonGetFollowingUseCase : CommonFlowUseCase<NSString *, NSArray<CommonUser *> *>
- (instancetype)initWithRepository:(id<CommonUserRepository>)repository dispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserByUidUseCase")))
@interface CommonGetUserByUidUseCase : CommonCoroutineUseCase<NSString *, CommonUser *>
- (instancetype)initWithRepository:(id<CommonUserRepository>)repository dispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(NSString *)parameters completionHandler:(void (^)(CommonUser * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggedUserUseCase")))
@interface CommonLoggedUserUseCase : CommonCoroutineUseCase<CommonKotlinUnit *, CommonBoolean *>
- (instancetype)initWithRepository:(id<CommonUserRepository>)repository dispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher __attribute__((swift_name("init(repository:dispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonKotlinUnit *)parameters completionHandler:(void (^)(CommonBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveFollowerUseCase")))
@interface CommonRemoveFollowerUseCase : CommonCoroutineUseCase<CommonKotlinPair<CommonUser *, CommonUser *> *, CommonKotlinUnit *>
- (instancetype)initWithRepository:(id<CommonUserRepository>)repository coroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(repository:coroutineDispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonKotlinPair<CommonUser *, CommonUser *> *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateUserProfileUseCase")))
@interface CommonUpdateUserProfileUseCase : CommonCoroutineUseCase<NSString *, NSString *>
- (instancetype)initWithRepository:(id<CommonUserRepository>)repository coroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(repository:coroutineDispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentUseCase")))
@interface CommonAddPaymentUseCase : CommonCoroutineUseCase<CommonPayment *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPaymentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonPayment *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindPaymentByUidOwnerUseCase")))
@interface CommonFindPaymentByUidOwnerUseCase : CommonFlowUseCase<NSString *, NSArray<CommonPayment *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPaymentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllCategoryEstablishmentUseCase")))
@interface CommonGetAllCategoryEstablishmentUseCase : CommonFlowUseCase<CommonKotlinUnit *, NSArray<CommonCategoryEstablishment *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonCategoryEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(CommonKotlinUnit *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginWithCredentialUseCase")))
@interface CommonLoginWithCredentialUseCase : CommonCoroutineUseCase<CommonFirebase_authAuthCredential *, CommonFirebase_authFirebaseUser *>
- (instancetype)initWithRepository:(id<CommonAuthRepository>)repository coroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(repository:coroutineDispatcher:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonFirebase_authAuthCredential *)parameters completionHandler:(void (^)(CommonFirebase_authFirebaseUser * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddAdvertUseCase")))
@interface CommonAddAdvertUseCase : CommonCoroutineUseCase<CommonAdvert *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonAdvertRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonAdvert *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindAdvertByUidOwnerUseCase")))
@interface CommonFindAdvertByUidOwnerUseCase : CommonFlowUseCase<NSString *, NSArray<CommonAdvert *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonAdvertRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindAdvertByUidUseCase")))
@interface CommonFindAdvertByUidUseCase : CommonFlowUseCase<NSString *, CommonAdvert *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonAdvertRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindAllAdvertUseCase")))
@interface CommonFindAllAdvertUseCase : CommonFlowUseCase<CommonKotlinUnit *, NSArray<CommonAdvert *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonAdvertRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(CommonKotlinUnit *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveAdvertUseCase")))
@interface CommonRemoveAdvertUseCase : CommonCoroutineUseCase<CommonAdvert *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonAdvertRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonAdvert *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateAdvertUseCase")))
@interface CommonUpdateAdvertUseCase : CommonCoroutineUseCase<CommonAdvert *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonAdvertRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonAdvert *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadImageAdvertUseCase")))
@interface CommonUploadImageAdvertUseCase : CommonCoroutineUseCase<NSString *, NSString *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonAdvertRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllCategoryEventUseCase")))
@interface CommonGetAllCategoryEventUseCase : CommonFlowUseCase<CommonKotlinUnit *, NSArray<CommonCategoryEvent *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonCategoryEventRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(CommonKotlinUnit *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddEstablishmentUseCase")))
@interface CommonAddEstablishmentUseCase : CommonCoroutineUseCase<CommonEstablishment *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonEstablishment *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddFavoriteEstablishmentUseCase")))
@interface CommonAddFavoriteEstablishmentUseCase : CommonCoroutineUseCase<CommonKotlinPair<NSString *, CommonEstablishment *> *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonKotlinPair<NSString *, CommonEstablishment *> *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindAllEstablishmentUseCase")))
@interface CommonFindAllEstablishmentUseCase : CommonFlowUseCase<CommonKotlinUnit *, NSArray<CommonEstablishment *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(CommonKotlinUnit *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindByUidOwnerEstablishmentUseCase")))
@interface CommonFindByUidOwnerEstablishmentUseCase : CommonFlowUseCase<NSString *, NSArray<CommonEstablishment *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindEstablishmentByUidSubCategoryUseCase")))
@interface CommonFindEstablishmentByUidSubCategoryUseCase : CommonFlowUseCase<NSString *, NSArray<CommonEstablishment *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindFavoriteEstablishmentUseCase")))
@interface CommonFindFavoriteEstablishmentUseCase : CommonFlowUseCase<NSString *, NSArray<CommonEstablishment *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindOneEstablishmentUseCase")))
@interface CommonFindOneEstablishmentUseCase : CommonFlowUseCase<NSString *, CommonEstablishment *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveEstablishmentUseCase")))
@interface CommonRemoveEstablishmentUseCase : CommonCoroutineUseCase<CommonEstablishment *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonEstablishment *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveFavoriteEstablishmentUseCase")))
@interface CommonRemoveFavoriteEstablishmentUseCase : CommonCoroutineUseCase<CommonKotlinPair<NSString *, CommonEstablishment *> *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonKotlinPair<NSString *, CommonEstablishment *> *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateEstablishmentUseCase")))
@interface CommonUpdateEstablishmentUseCase : CommonCoroutineUseCase<CommonEstablishment *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonEstablishment *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadImageEstablishmentUseCase")))
@interface CommonUploadImageEstablishmentUseCase : CommonCoroutineUseCase<NSString *, NSString *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPromotionUseCase")))
@interface CommonAddPromotionUseCase : CommonCoroutineUseCase<CommonPromotion *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPromotionRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonPromotion *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindAllPromotionUseCase")))
@interface CommonFindAllPromotionUseCase : CommonFlowUseCase<CommonKotlinUnit *, NSArray<CommonPromotion *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPromotionRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(CommonKotlinUnit *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindPromotionByUidEstablishmentUseCase")))
@interface CommonFindPromotionByUidEstablishmentUseCase : CommonFlowUseCase<NSString *, NSArray<CommonPromotion *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPromotionRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindPromotionByUidOwnerUseCase")))
@interface CommonFindPromotionByUidOwnerUseCase : CommonFlowUseCase<NSString *, NSArray<CommonPromotion *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPromotionRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindPromotionByUidUseCase")))
@interface CommonFindPromotionByUidUseCase : CommonFlowUseCase<NSString *, CommonPromotion *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPromotionRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemovePromotionUseCase")))
@interface CommonRemovePromotionUseCase : CommonCoroutineUseCase<CommonPromotion *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPromotionRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonPromotion *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePromotionUseCase")))
@interface CommonUpdatePromotionUseCase : CommonCoroutineUseCase<CommonPromotion *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPromotionRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonPromotion *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UploadImagePromotionUseCase")))
@interface CommonUploadImagePromotionUseCase : CommonCoroutineUseCase<NSString *, NSString *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonPromotionRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetAllSubCategoryEstablishmentUseCase")))
@interface CommonGetAllSubCategoryEstablishmentUseCase : CommonFlowUseCase<CommonKotlinUnit *, NSArray<CommonSubCategoryEstablishment *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonSubCategoryEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(CommonKotlinUnit *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetSubCategoryEstablishByUidCategoryUseCase")))
@interface CommonGetSubCategoryEstablishByUidCategoryUseCase : CommonFlowUseCase<NSString *, NSArray<CommonSubCategoryEstablishment *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonSubCategoryEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetSubCategoryEstablishByUidUseCase")))
@interface CommonGetSubCategoryEstablishByUidUseCase : CommonFlowUseCase<NSString *, CommonSubCategoryEstablishment *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonSubCategoryEstablishmentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisLikeContentUseCase")))
@interface CommonDisLikeContentUseCase : CommonCoroutineUseCase<CommonLikeContent *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonLikeContentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonLikeContent *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindLikeContentByUidContentUseCase")))
@interface CommonFindLikeContentByUidContentUseCase : CommonFlowUseCase<NSString *, NSArray<CommonLikeContent *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonLikeContentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FindLikeContentByUidUserUseCase")))
@interface CommonFindLikeContentByUidUserUseCase : CommonFlowUseCase<NSString *, NSArray<CommonLikeContent *> *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonLikeContentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<CommonKotlinx_coroutines_coreFlow>)executeParameters:(NSString *)parameters __attribute__((swift_name("execute(parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeContentUseCase")))
@interface CommonLikeContentUseCase : CommonCoroutineUseCase<CommonLikeContent *, CommonKotlinUnit *>
- (instancetype)initWithDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher repository:(id<CommonLikeContentRepository>)repository __attribute__((swift_name("init(dispatcher:repository:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCoroutineDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)coroutineDispatcher __attribute__((swift_name("init(coroutineDispatcher:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 @note This method converts instances of RuntimeException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeParameters:(CommonLikeContent *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("AdvertRepository")))
@protocol CommonAdvertRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAdvert:(CommonAdvert *)advert completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(advert:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeParameters:(CommonAdvert *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(parameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateAdvert:(CommonAdvert *)advert completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(advert:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("AuthRepository")))
@protocol CommonAuthRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithAuthCredentialCredential:(CommonFirebase_authAuthCredential *)credential completionHandler:(void (^)(CommonFirebase_authFirebaseUser * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithAuthCredential(credential:completionHandler:)")));
@end;

__attribute__((swift_name("CategoryEstablishmentRepository")))
@protocol CommonCategoryEstablishmentRepository
@required
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
@end;

__attribute__((swift_name("CategoryEventRepository")))
@protocol CommonCategoryEventRepository
@required
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
@end;

__attribute__((swift_name("EstablishmentRepository")))
@protocol CommonEstablishmentRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFavoriteEstablishmentInfo:(CommonKotlinPair<NSString *, CommonEstablishment *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFavoriteEstablishment(info:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidSubCategoryUidSubCategory:(NSString *)uidSubCategory __attribute__((swift_name("findByUidSubCategory(uidSubCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findFavoriteEstablishmentUidUser:(NSString *)uidUser __attribute__((swift_name("findFavoriteEstablishment(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFavoriteEstablishmentInfo:(CommonKotlinPair<NSString *, CommonEstablishment *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFavoriteEstablishment(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("EventRepository")))
@protocol CommonEventRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addEvent:(CommonEvent *)event completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(event:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFavoriteEventEventInfo:(CommonKotlinPair<NSString *, CommonEvent *> *)eventInfo completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFavoriteEvent(eventInfo:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidCategoryUidCategory:(NSString *)uidCategory __attribute__((swift_name("findByUidCategory(uidCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidEstablishmentUidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("findByUidEstablishment(uidEstablishment:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findFavoriteEventParameters:(NSString *)parameters __attribute__((swift_name("findFavoriteEvent(parameters:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeParameters:(CommonEvent *)parameters completionHandler_:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(parameters:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFavoriteEventEventInfo:(CommonKotlinPair<NSString *, CommonEvent *> *)eventInfo completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFavoriteEvent(eventInfo:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateEvent:(CommonEvent *)event completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(event:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("LikeContentRepository")))
@protocol CommonLikeContentRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)disLikeContentContent:(CommonLikeContent *)content completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disLikeContent(content:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findLikeByUidContentUidContent:(NSString *)uidContent __attribute__((swift_name("findLikeByUidContent(uidContent:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findLikeByUidUserUidUser:(NSString *)uidUser __attribute__((swift_name("findLikeByUidUser(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)likeContentContent:(CommonLikeContent *)content completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("likeContent(content:completionHandler:)")));
@end;

__attribute__((swift_name("PaymentRepository")))
@protocol CommonPaymentRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPayment:(CommonPayment *)payment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(payment:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
@end;

__attribute__((swift_name("PromotionRepository")))
@protocol CommonPromotionRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(promotion:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidEstablishmentUidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("findByUidEstablishment(uidEstablishment:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removePromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(promotion:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(promotion:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("SubCategoryEstablishmentRepository")))
@protocol CommonSubCategoryEstablishmentRepository
@required
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUidSubCategory:(NSString *)uidSubCategory __attribute__((swift_name("findByUid(uidSubCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidCategoryUidCategory:(NSString *)uidCategory __attribute__((swift_name("findByUidCategory(uidCategory:)")));
@end;

__attribute__((swift_name("UserRepository")))
@protocol CommonUserRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addUser:(CommonUser *)user completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(user:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)followInfo:(CommonKotlinPair<CommonUser *, CommonUser *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("follow(info:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getFollowersUidUser:(NSString *)uidUser __attribute__((swift_name("getFollowers(uidUser:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getFollowingsUidUser:(NSString *)uidUser __attribute__((swift_name("getFollowings(uidUser:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getUserByUidUidUser:(NSString *)uidUser __attribute__((swift_name("getUserByUid(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserByUidAsyncUidUser:(NSString *)uidUser completionHandler:(void (^)(CommonUser * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserByUidAsync(uidUser:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowInfo:(CommonKotlinPair<CommonUser *, CommonUser *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollow(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserPhotoParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUserPhoto(parameters:completionHandler:)")));
@property (readonly) BOOL isLogged __attribute__((swift_name("isLogged")));
@end;

__attribute__((swift_name("Mapper")))
@protocol CommonMapper
@required
- (id _Nullable)mapItem:(id _Nullable)item __attribute__((swift_name("map(item:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserMapper")))
@interface CommonUserMapper : CommonBase <CommonMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (CommonUser *)mapItem:(CommonFirebase_authFirebaseUser *)item __attribute__((swift_name("map(item:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Advert")))
@interface CommonAdvert : CommonBase
- (instancetype)initWithUid:(NSString *)uid title:(NSString *)title description:(NSString *)description uidAdvertiser:(NSString *)uidAdvertiser createdAt:(double)createdAt updatedAt:(double)updatedAt uidEstablishment:(NSString *)uidEstablishment likeCount:(int64_t)likeCount images:(NSArray<NSString *> *)images advertType:(int32_t)advertType targetUser:(NSArray<NSString *> *)targetUser verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("init(uid:title:description:uidAdvertiser:createdAt:updatedAt:uidEstablishment:likeCount:images:advertType:targetUser:verificationState:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component10 __attribute__((swift_name("component10()")));
- (NSArray<NSString *> *)component11 __attribute__((swift_name("component11()")));
- (CommonVerificationState *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (int64_t)component8 __attribute__((swift_name("component8()")));
- (NSArray<NSString *> *)component9 __attribute__((swift_name("component9()")));
- (CommonAdvert *)doCopyUid:(NSString *)uid title:(NSString *)title description:(NSString *)description uidAdvertiser:(NSString *)uidAdvertiser createdAt:(double)createdAt updatedAt:(double)updatedAt uidEstablishment:(NSString *)uidEstablishment likeCount:(int64_t)likeCount images:(NSArray<NSString *> *)images advertType:(int32_t)advertType targetUser:(NSArray<NSString *> *)targetUser verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("doCopy(uid:title:description:uidAdvertiser:createdAt:updatedAt:uidEstablishment:likeCount:images:advertType:targetUser:verificationState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t advertType __attribute__((swift_name("advertType")));
@property (readonly) double createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<NSString *> *images __attribute__((swift_name("images")));
@property (readonly) int64_t likeCount __attribute__((swift_name("likeCount")));
@property (readonly) NSArray<NSString *> *targetUser __attribute__((swift_name("targetUser")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) NSString *uidAdvertiser __attribute__((swift_name("uidAdvertiser")));
@property (readonly) NSString *uidEstablishment __attribute__((swift_name("uidEstablishment")));
@property (readonly) double updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CommonVerificationState *verificationState __attribute__((swift_name("verificationState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CategoryEstablishment")))
@interface CommonCategoryEstablishment : CommonBase
- (instancetype)initWithUid:(NSString *)uid title:(NSString *)title createdAt:(double)createdAt updatedAt:(double)updatedAt verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("init(uid:title:createdAt:updatedAt:verificationState:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (CommonVerificationState *)component5 __attribute__((swift_name("component5()")));
- (CommonCategoryEstablishment *)doCopyUid:(NSString *)uid title:(NSString *)title createdAt:(double)createdAt updatedAt:(double)updatedAt verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("doCopy(uid:title:createdAt:updatedAt:verificationState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) double updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CommonVerificationState *verificationState __attribute__((swift_name("verificationState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CategoryEvent")))
@interface CommonCategoryEvent : CommonBase
- (instancetype)initWithUid:(NSString *)uid name:(NSString *)name description:(NSString *)description image:(NSString *)image createdAt:(double)createdAt updatedAt:(double)updatedAt verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("init(uid:name:description:image:createdAt:updatedAt:verificationState:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (CommonVerificationState *)component7 __attribute__((swift_name("component7()")));
- (CommonCategoryEvent *)doCopyUid:(NSString *)uid name:(NSString *)name description:(NSString *)description image:(NSString *)image createdAt:(double)createdAt updatedAt:(double)updatedAt verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("doCopy(uid:name:description:image:createdAt:updatedAt:verificationState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) double updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CommonVerificationState *verificationState __attribute__((swift_name("verificationState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Establishment")))
@interface CommonEstablishment : CommonBase
- (instancetype)initWithUid:(NSString *)uid name:(NSString *)name phoneNumber:(NSString *)phoneNumber contactEmail:(NSString *)contactEmail openingDate:(double)openingDate closingDate:(double)closingDate openingDateSaturday:(double)openingDateSaturday closingDateSaturday:(double)closingDateSaturday createdAt:(double)createdAt updatedAt:(double)updatedAt description:(NSString *)description verificationState:(CommonVerificationState *)verificationState longitude:(double)longitude latitude:(double)latitude likeCount:(int64_t)likeCount images:(NSArray<NSString *> *)images schedule:(NSArray<CommonWeekday *> *)schedule uidSubCategory:(NSString *)uidSubCategory uidAdvertiser:(NSString *)uidAdvertiser city:(NSString *)city detailedAddress:(NSString *)detailedAddress state:(NSString *)state country:(NSString *)country surveyLink:(NSString * _Nullable)surveyLink __attribute__((swift_name("init(uid:name:phoneNumber:contactEmail:openingDate:closingDate:openingDateSaturday:closingDateSaturday:createdAt:updatedAt:description:verificationState:longitude:latitude:likeCount:images:schedule:uidSubCategory:uidAdvertiser:city:detailedAddress:state:country:surveyLink:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (double)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (CommonVerificationState *)component12 __attribute__((swift_name("component12()")));
- (double)component13 __attribute__((swift_name("component13()")));
- (double)component14 __attribute__((swift_name("component14()")));
- (int64_t)component15 __attribute__((swift_name("component15()")));
- (NSArray<NSString *> *)component16 __attribute__((swift_name("component16()")));
- (NSArray<CommonWeekday *> *)component17 __attribute__((swift_name("component17()")));
- (NSString *)component18 __attribute__((swift_name("component18()")));
- (NSString *)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component20 __attribute__((swift_name("component20()")));
- (NSString *)component21 __attribute__((swift_name("component21()")));
- (NSString *)component22 __attribute__((swift_name("component22()")));
- (NSString *)component23 __attribute__((swift_name("component23()")));
- (NSString * _Nullable)component24 __attribute__((swift_name("component24()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (double)component7 __attribute__((swift_name("component7()")));
- (double)component8 __attribute__((swift_name("component8()")));
- (double)component9 __attribute__((swift_name("component9()")));
- (CommonEstablishment *)doCopyUid:(NSString *)uid name:(NSString *)name phoneNumber:(NSString *)phoneNumber contactEmail:(NSString *)contactEmail openingDate:(double)openingDate closingDate:(double)closingDate openingDateSaturday:(double)openingDateSaturday closingDateSaturday:(double)closingDateSaturday createdAt:(double)createdAt updatedAt:(double)updatedAt description:(NSString *)description verificationState:(CommonVerificationState *)verificationState longitude:(double)longitude latitude:(double)latitude likeCount:(int64_t)likeCount images:(NSArray<NSString *> *)images schedule:(NSArray<CommonWeekday *> *)schedule uidSubCategory:(NSString *)uidSubCategory uidAdvertiser:(NSString *)uidAdvertiser city:(NSString *)city detailedAddress:(NSString *)detailedAddress state:(NSString *)state country:(NSString *)country surveyLink:(NSString * _Nullable)surveyLink __attribute__((swift_name("doCopy(uid:name:phoneNumber:contactEmail:openingDate:closingDate:openingDateSaturday:closingDateSaturday:createdAt:updatedAt:description:verificationState:longitude:latitude:likeCount:images:schedule:uidSubCategory:uidAdvertiser:city:detailedAddress:state:country:surveyLink:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) double closingDate __attribute__((swift_name("closingDate")));
@property (readonly) double closingDateSaturday __attribute__((swift_name("closingDateSaturday")));
@property (readonly) NSString *contactEmail __attribute__((swift_name("contactEmail")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) double createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *detailedAddress __attribute__((swift_name("detailedAddress")));
@property (readonly) NSArray<NSString *> *images __attribute__((swift_name("images")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) int64_t likeCount __attribute__((swift_name("likeCount")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) double openingDate __attribute__((swift_name("openingDate")));
@property (readonly) double openingDateSaturday __attribute__((swift_name("openingDateSaturday")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) NSArray<CommonWeekday *> *schedule __attribute__((swift_name("schedule")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) NSString * _Nullable surveyLink __attribute__((swift_name("surveyLink")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) NSString *uidAdvertiser __attribute__((swift_name("uidAdvertiser")));
@property (readonly) NSString *uidSubCategory __attribute__((swift_name("uidSubCategory")));
@property (readonly) double updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CommonVerificationState *verificationState __attribute__((swift_name("verificationState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event")))
@interface CommonEvent : CommonBase
- (instancetype)initWithUid:(NSString *)uid name:(NSString *)name date:(double)date startTime:(double)startTime endTime:(double)endTime createdAt:(double)createdAt updatedAt:(double)updatedAt images:(NSArray<NSString *> *)images longitude:(double)longitude latitude:(double)latitude verificationState:(CommonVerificationState *)verificationState description:(NSString *)description uidAdvertiser:(NSString *)uidAdvertiser uidCategoryEvent:(NSString *)uidCategoryEvent uidEstablishment:(NSString *)uidEstablishment likeCount:(int64_t)likeCount detailedAddress:(NSString *)detailedAddress city:(NSString *)city state:(NSString *)state country:(NSString *)country __attribute__((swift_name("init(uid:name:date:startTime:endTime:createdAt:updatedAt:images:longitude:latitude:verificationState:description:uidAdvertiser:uidCategoryEvent:uidEstablishment:likeCount:detailedAddress:city:state:country:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (double)component10 __attribute__((swift_name("component10()")));
- (CommonVerificationState *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (int64_t)component16 __attribute__((swift_name("component16()")));
- (NSString *)component17 __attribute__((swift_name("component17()")));
- (NSString *)component18 __attribute__((swift_name("component18()")));
- (NSString *)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component20 __attribute__((swift_name("component20()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (double)component6 __attribute__((swift_name("component6()")));
- (double)component7 __attribute__((swift_name("component7()")));
- (NSArray<NSString *> *)component8 __attribute__((swift_name("component8()")));
- (double)component9 __attribute__((swift_name("component9()")));
- (CommonEvent *)doCopyUid:(NSString *)uid name:(NSString *)name date:(double)date startTime:(double)startTime endTime:(double)endTime createdAt:(double)createdAt updatedAt:(double)updatedAt images:(NSArray<NSString *> *)images longitude:(double)longitude latitude:(double)latitude verificationState:(CommonVerificationState *)verificationState description:(NSString *)description uidAdvertiser:(NSString *)uidAdvertiser uidCategoryEvent:(NSString *)uidCategoryEvent uidEstablishment:(NSString *)uidEstablishment likeCount:(int64_t)likeCount detailedAddress:(NSString *)detailedAddress city:(NSString *)city state:(NSString *)state country:(NSString *)country __attribute__((swift_name("doCopy(uid:name:date:startTime:endTime:createdAt:updatedAt:images:longitude:latitude:verificationState:description:uidAdvertiser:uidCategoryEvent:uidEstablishment:likeCount:detailedAddress:city:state:country:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isLinkToEstablishment __attribute__((swift_name("isLinkToEstablishment()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) double createdAt __attribute__((swift_name("createdAt")));
@property (readonly) double date __attribute__((swift_name("date")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *detailedAddress __attribute__((swift_name("detailedAddress")));
@property (readonly) double endTime __attribute__((swift_name("endTime")));
@property (readonly) NSArray<NSString *> *images __attribute__((swift_name("images")));
@property (readonly) double latitude __attribute__((swift_name("latitude")));
@property (readonly) int64_t likeCount __attribute__((swift_name("likeCount")));
@property (readonly) double longitude __attribute__((swift_name("longitude")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) double startTime __attribute__((swift_name("startTime")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) NSString *uidAdvertiser __attribute__((swift_name("uidAdvertiser")));
@property (readonly) NSString *uidCategoryEvent __attribute__((swift_name("uidCategoryEvent")));
@property (readonly) NSString *uidEstablishment __attribute__((swift_name("uidEstablishment")));
@property (readonly) double updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CommonVerificationState *verificationState __attribute__((swift_name("verificationState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeContent")))
@interface CommonLikeContent : CommonBase
- (instancetype)initWithUid:(NSString *)uid uidContent:(NSString *)uidContent createdAt:(double)createdAt uidUser:(NSString *)uidUser likeContentType:(CommonLikeContentType * _Nullable)likeContentType __attribute__((swift_name("init(uid:uidContent:createdAt:uidUser:likeContentType:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (CommonLikeContentType * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CommonLikeContent *)doCopyUid:(NSString *)uid uidContent:(NSString *)uidContent createdAt:(double)createdAt uidUser:(NSString *)uidUser likeContentType:(CommonLikeContentType * _Nullable)likeContentType __attribute__((swift_name("doCopy(uid:uidContent:createdAt:uidUser:likeContentType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double createdAt __attribute__((swift_name("createdAt")));
@property (readonly) CommonLikeContentType * _Nullable likeContentType __attribute__((swift_name("likeContentType")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) NSString *uidContent __attribute__((swift_name("uidContent")));
@property (readonly) NSString *uidUser __attribute__((swift_name("uidUser")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol CommonKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface CommonKotlinEnum<E> : CommonBase <CommonKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeContentType")))
@interface CommonLikeContentType : CommonKotlinEnum<CommonLikeContentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonLikeContentType *establishment __attribute__((swift_name("establishment")));
@property (class, readonly) CommonLikeContentType *promotion __attribute__((swift_name("promotion")));
@property (class, readonly) CommonLikeContentType *event __attribute__((swift_name("event")));
@property (class, readonly) CommonLikeContentType *advert __attribute__((swift_name("advert")));
+ (CommonKotlinArray<CommonLikeContentType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *collection __attribute__((swift_name("collection")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payment")))
@interface CommonPayment : CommonBase
- (instancetype)initWithUid:(NSString *)uid createdAt:(double)createdAt amount:(NSString *)amount credit:(int64_t)credit uidUser:(NSString *)uidUser verificationCode:(NSString *)verificationCode verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("init(uid:createdAt:amount:credit:uidUser:verificationCode:verificationState:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int64_t)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (CommonVerificationState *)component7 __attribute__((swift_name("component7()")));
- (CommonPayment *)doCopyUid:(NSString *)uid createdAt:(double)createdAt amount:(NSString *)amount credit:(int64_t)credit uidUser:(NSString *)uidUser verificationCode:(NSString *)verificationCode verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("doCopy(uid:createdAt:amount:credit:uidUser:verificationCode:verificationState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) double createdAt __attribute__((swift_name("createdAt")));
@property (readonly) int64_t credit __attribute__((swift_name("credit")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) NSString *uidUser __attribute__((swift_name("uidUser")));
@property (readonly) NSString *verificationCode __attribute__((swift_name("verificationCode")));
@property (readonly) CommonVerificationState *verificationState __attribute__((swift_name("verificationState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Promotion")))
@interface CommonPromotion : CommonBase
- (instancetype)initWithUid:(NSString *)uid createdAt:(double)createdAt updatedAt:(double)updatedAt publishedAt:(double)publishedAt uidAdvertiser:(NSString *)uidAdvertiser title:(NSString *)title likeCount:(int64_t)likeCount verificationState:(CommonVerificationState *)verificationState images:(NSArray<NSString *> *)images description:(NSString *)description uidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("init(uid:createdAt:updatedAt:publishedAt:uidAdvertiser:title:likeCount:verificationState:images:description:uidEstablishment:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (int64_t)component7 __attribute__((swift_name("component7()")));
- (CommonVerificationState *)component8 __attribute__((swift_name("component8()")));
- (NSArray<NSString *> *)component9 __attribute__((swift_name("component9()")));
- (CommonPromotion *)doCopyUid:(NSString *)uid createdAt:(double)createdAt updatedAt:(double)updatedAt publishedAt:(double)publishedAt uidAdvertiser:(NSString *)uidAdvertiser title:(NSString *)title likeCount:(int64_t)likeCount verificationState:(CommonVerificationState *)verificationState images:(NSArray<NSString *> *)images description:(NSString *)description uidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("doCopy(uid:createdAt:updatedAt:publishedAt:uidAdvertiser:title:likeCount:verificationState:images:description:uidEstablishment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isLinkedToEstablishment __attribute__((swift_name("isLinkedToEstablishment()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<NSString *> *images __attribute__((swift_name("images")));
@property (readonly) int64_t likeCount __attribute__((swift_name("likeCount")));
@property (readonly) double publishedAt __attribute__((swift_name("publishedAt")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) NSString *uidAdvertiser __attribute__((swift_name("uidAdvertiser")));
@property (readonly) NSString *uidEstablishment __attribute__((swift_name("uidEstablishment")));
@property (readonly) double updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) CommonVerificationState *verificationState __attribute__((swift_name("verificationState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubCategoryEstablishment")))
@interface CommonSubCategoryEstablishment : CommonBase
- (instancetype)initWithUid:(NSString *)uid title:(NSString *)title uidCategory:(NSString *)uidCategory image:(NSString *)image createdAt:(double)createdAt verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("init(uid:title:uidCategory:image:createdAt:verificationState:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (double)component5 __attribute__((swift_name("component5()")));
- (CommonVerificationState *)component6 __attribute__((swift_name("component6()")));
- (CommonSubCategoryEstablishment *)doCopyUid:(NSString *)uid title:(NSString *)title uidCategory:(NSString *)uidCategory image:(NSString *)image createdAt:(double)createdAt verificationState:(CommonVerificationState *)verificationState __attribute__((swift_name("doCopy(uid:title:uidCategory:image:createdAt:verificationState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) NSString *uidCategory __attribute__((swift_name("uidCategory")));
@property (readonly) CommonVerificationState *verificationState __attribute__((swift_name("verificationState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface CommonUser : CommonBase
- (instancetype)initWithUid:(NSString *)uid displayName:(NSString *)displayName email:(NSString *)email emailVisibility:(BOOL)emailVisibility profile:(NSString *)profile phoneNumber:(NSString *)phoneNumber phoneNumberVisibility:(BOOL)phoneNumberVisibility gender:(NSString *)gender genderVisibility:(BOOL)genderVisibility ageRange:(NSString *)ageRange ageVisibility:(BOOL)ageVisibility city:(NSString *)city cityVisibility:(BOOL)cityVisibility state:(NSString *)state stateVisibility:(BOOL)stateVisibility country:(NSString *)country countryVisibility:(BOOL)countryVisibility createAt:(double)createAt updatedAt:(double)updatedAt credit:(int64_t)credit __attribute__((swift_name("init(uid:displayName:email:emailVisibility:profile:phoneNumber:phoneNumberVisibility:gender:genderVisibility:ageRange:ageVisibility:city:cityVisibility:state:stateVisibility:country:countryVisibility:createAt:updatedAt:credit:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (BOOL)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (BOOL)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (BOOL)component15 __attribute__((swift_name("component15()")));
- (NSString *)component16 __attribute__((swift_name("component16()")));
- (BOOL)component17 __attribute__((swift_name("component17()")));
- (double)component18 __attribute__((swift_name("component18()")));
- (double)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int64_t)component20 __attribute__((swift_name("component20()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (double)convertCreditToUsd __attribute__((swift_name("convertCreditToUsd()")));
- (CommonUser *)doCopyUid:(NSString *)uid displayName:(NSString *)displayName email:(NSString *)email emailVisibility:(BOOL)emailVisibility profile:(NSString *)profile phoneNumber:(NSString *)phoneNumber phoneNumberVisibility:(BOOL)phoneNumberVisibility gender:(NSString *)gender genderVisibility:(BOOL)genderVisibility ageRange:(NSString *)ageRange ageVisibility:(BOOL)ageVisibility city:(NSString *)city cityVisibility:(BOOL)cityVisibility state:(NSString *)state stateVisibility:(BOOL)stateVisibility country:(NSString *)country countryVisibility:(BOOL)countryVisibility createAt:(double)createAt updatedAt:(double)updatedAt credit:(int64_t)credit __attribute__((swift_name("doCopy(uid:displayName:email:emailVisibility:profile:phoneNumber:phoneNumberVisibility:gender:genderVisibility:ageRange:ageVisibility:city:cityVisibility:state:stateVisibility:country:countryVisibility:createAt:updatedAt:credit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *ageRange __attribute__((swift_name("ageRange")));
@property (readonly) BOOL ageVisibility __attribute__((swift_name("ageVisibility")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) BOOL cityVisibility __attribute__((swift_name("cityVisibility")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) BOOL countryVisibility __attribute__((swift_name("countryVisibility")));
@property (readonly) double createAt __attribute__((swift_name("createAt")));
@property (readonly) int64_t credit __attribute__((swift_name("credit")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) BOOL emailVisibility __attribute__((swift_name("emailVisibility")));
@property (readonly) NSString *gender __attribute__((swift_name("gender")));
@property (readonly) BOOL genderVisibility __attribute__((swift_name("genderVisibility")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) BOOL phoneNumberVisibility __attribute__((swift_name("phoneNumberVisibility")));
@property (readonly) NSString *profile __attribute__((swift_name("profile")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) BOOL stateVisibility __attribute__((swift_name("stateVisibility")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) double updatedAt __attribute__((swift_name("updatedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerificationState")))
@interface CommonVerificationState : CommonKotlinEnum<CommonVerificationState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonVerificationState *pending __attribute__((swift_name("pending")));
@property (class, readonly) CommonVerificationState *valid __attribute__((swift_name("valid")));
@property (class, readonly) CommonVerificationState *refused __attribute__((swift_name("refused")));
+ (CommonKotlinArray<CommonVerificationState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Weekday")))
@interface CommonWeekday : CommonKotlinEnum<CommonWeekday *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonWeekday *sunday __attribute__((swift_name("sunday")));
@property (class, readonly) CommonWeekday *monday __attribute__((swift_name("monday")));
@property (class, readonly) CommonWeekday *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) CommonWeekday *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) CommonWeekday *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) CommonWeekday *friday __attribute__((swift_name("friday")));
@property (class, readonly) CommonWeekday *saturday __attribute__((swift_name("saturday")));
+ (CommonKotlinArray<CommonWeekday *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdvertInfo")))
@interface CommonAdvertInfo : CommonBase
- (instancetype)initWithAdvert:(CommonAdvert *)advert images:(NSArray<NSString *> *)images __attribute__((swift_name("init(advert:images:)"))) __attribute__((objc_designated_initializer));
- (CommonAdvert *)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (CommonAdvertInfo *)doCopyAdvert:(CommonAdvert *)advert images:(NSArray<NSString *> *)images __attribute__((swift_name("doCopy(advert:images:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonAdvert *advert __attribute__((swift_name("advert")));
@property (readonly) NSArray<NSString *> *images __attribute__((swift_name("images")));
@end;

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol CommonKoin_coreKoinComponent
@required
- (CommonKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppViewModels")))
@interface CommonAppViewModels : CommonBase <CommonKoin_coreKoinComponent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)appViewModels __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonAppViewModels *shared __attribute__((swift_name("shared")));
@property (readonly) CommonHomeViewModel *homeViewModel __attribute__((swift_name("homeViewModel")));
@end;

__attribute__((swift_name("Result")))
@interface CommonResult<__covariant R> : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultError")))
@interface CommonResultError : CommonResult<CommonKotlinNothing *>
- (instancetype)initWithException:(CommonKotlinException *)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (CommonKotlinException *)component1 __attribute__((swift_name("component1()")));
- (CommonResultError *)doCopyException:(CommonKotlinException *)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinException *exception __attribute__((swift_name("exception")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultLoading")))
@interface CommonResultLoading : CommonResult<CommonKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonResultLoading *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSuccess")))
@interface CommonResultSuccess<__covariant T> : CommonResult<T>
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (CommonResultSuccess<T> *)doCopyData:(T _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultAdvertRepository")))
@interface CommonDefaultAdvertRepository : CommonBase <CommonAdvertRepository>
- (instancetype)initWithDataSource:(id<CommonAdvertDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAdvert:(CommonAdvert *)advert completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(advert:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeParameters:(CommonAdvert *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(parameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateAdvert:(CommonAdvert *)advert completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(advert:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultAuthRepository")))
@interface CommonDefaultAuthRepository : CommonBase <CommonAuthRepository>
- (instancetype)initWithAuthDataSource:(id<CommonAuthDataSource>)authDataSource __attribute__((swift_name("init(authDataSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithAuthCredentialCredential:(CommonFirebase_authAuthCredential *)credential completionHandler:(void (^)(CommonFirebase_authFirebaseUser * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithAuthCredential(credential:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultCategoryEstablishmentRepository")))
@interface CommonDefaultCategoryEstablishmentRepository : CommonBase <CommonCategoryEstablishmentRepository>
- (instancetype)initWithDataSource:(id<CommonCategoryEstablishmentDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultCategoryEventRepository")))
@interface CommonDefaultCategoryEventRepository : CommonBase <CommonCategoryEventRepository>
- (instancetype)initWithDataSource:(id<CommonCategoryEventDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultEstablishmentRepository")))
@interface CommonDefaultEstablishmentRepository : CommonBase <CommonEstablishmentRepository>
- (instancetype)initWithDataSource:(id<CommonEstablishmentDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFavoriteEstablishmentInfo:(CommonKotlinPair<NSString *, CommonEstablishment *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFavoriteEstablishment(info:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidSubCategoryUidSubCategory:(NSString *)uidSubCategory __attribute__((swift_name("findByUidSubCategory(uidSubCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findFavoriteEstablishmentUidUser:(NSString *)uidUser __attribute__((swift_name("findFavoriteEstablishment(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFavoriteEstablishmentInfo:(CommonKotlinPair<NSString *, CommonEstablishment *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFavoriteEstablishment(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultEventRepository")))
@interface CommonDefaultEventRepository : CommonBase <CommonEventRepository>
- (instancetype)initWithDataSource:(id<CommonEventDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addEvent:(CommonEvent *)event completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(event:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFavoriteEventEventInfo:(CommonKotlinPair<NSString *, CommonEvent *> *)eventInfo completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFavoriteEvent(eventInfo:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidCategoryUidCategory:(NSString *)uidCategory __attribute__((swift_name("findByUidCategory(uidCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidEstablishmentUidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("findByUidEstablishment(uidEstablishment:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findFavoriteEventParameters:(NSString *)parameters __attribute__((swift_name("findFavoriteEvent(parameters:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeParameters:(CommonEvent *)parameters completionHandler_:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(parameters:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFavoriteEventEventInfo:(CommonKotlinPair<NSString *, CommonEvent *> *)eventInfo completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFavoriteEvent(eventInfo:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateEvent:(CommonEvent *)event completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(event:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultLikeContentRepository")))
@interface CommonDefaultLikeContentRepository : CommonBase <CommonLikeContentRepository>
- (instancetype)initWithDataSource:(id<CommonLikeContentDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)disLikeContentContent:(CommonLikeContent *)content completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disLikeContent(content:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findLikeByUidContentUidContent:(NSString *)uidContent __attribute__((swift_name("findLikeByUidContent(uidContent:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findLikeByUidUserUidUser:(NSString *)uidUser __attribute__((swift_name("findLikeByUidUser(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)likeContentContent:(CommonLikeContent *)content completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("likeContent(content:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultPaymentRepository")))
@interface CommonDefaultPaymentRepository : CommonBase <CommonPaymentRepository>
- (instancetype)initWithDataSource:(id<CommonPaymentDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPayment:(CommonPayment *)payment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(payment:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultPromotionRepository")))
@interface CommonDefaultPromotionRepository : CommonBase <CommonPromotionRepository>
- (instancetype)initWithDataSource:(id<CommonPromotionDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(promotion:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidEstablishmentUidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("findByUidEstablishment(uidEstablishment:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removePromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(promotion:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(promotion:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSubCategoryEstablishmentRepository")))
@interface CommonDefaultSubCategoryEstablishmentRepository : CommonBase <CommonSubCategoryEstablishmentRepository>
- (instancetype)initWithDataSource:(id<CommonSubCategoryEstablishmentDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUidSubCategory:(NSString *)uidSubCategory __attribute__((swift_name("findByUid(uidSubCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidCategoryUidCategory:(NSString *)uidCategory __attribute__((swift_name("findByUidCategory(uidCategory:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultUserRepository")))
@interface CommonDefaultUserRepository : CommonBase <CommonUserRepository>
- (instancetype)initWithDataSource:(id<CommonUserDataSource>)dataSource __attribute__((swift_name("init(dataSource:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addUser:(CommonUser *)user completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(user:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)followInfo:(CommonKotlinPair<CommonUser *, CommonUser *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("follow(info:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getFollowersUidUser:(NSString *)uidUser __attribute__((swift_name("getFollowers(uidUser:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getFollowingsUidUser:(NSString *)uidUser __attribute__((swift_name("getFollowings(uidUser:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getUserByUidUidUser:(NSString *)uidUser __attribute__((swift_name("getUserByUid(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserByUidAsyncUidUser:(NSString *)uidUser completionHandler:(void (^)(CommonUser * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserByUidAsync(uidUser:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowInfo:(CommonKotlinPair<CommonUser *, CommonUser *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollow(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserPhotoParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUserPhoto(parameters:completionHandler:)")));
@property (readonly) BOOL isLogged __attribute__((swift_name("isLogged")));
@end;

__attribute__((swift_name("CategoryEventDataSource")))
@protocol CommonCategoryEventDataSource
@required
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteCategoryEventDataSource")))
@interface CommonRemoteCategoryEventDataSource : CommonBase <CommonCategoryEventDataSource>
- (instancetype)initWithFirestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(firestore:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
@end;

__attribute__((swift_name("EstablishmentDataSource")))
@protocol CommonEstablishmentDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFavoriteEstablishmentInfo:(CommonKotlinPair<NSString *, CommonEstablishment *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFavoriteEstablishment(info:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidSubCategoryUidSubCategory:(NSString *)uidSubCategory __attribute__((swift_name("findByUidSubCategory(uidSubCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findFavoriteEstablishmentUidUser:(NSString *)uidUser __attribute__((swift_name("findFavoriteEstablishment(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFavoriteEstablishmentInfo:(CommonKotlinPair<NSString *, CommonEstablishment *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFavoriteEstablishment(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteEstablishmentDataSource")))
@interface CommonRemoteEstablishmentDataSource : CommonBase <CommonEstablishmentDataSource>
- (instancetype)initWithFirestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(firestore:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFavoriteEstablishmentInfo:(CommonKotlinPair<NSString *, CommonEstablishment *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFavoriteEstablishment(info:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidSubCategoryUidSubCategory:(NSString *)uidSubCategory __attribute__((swift_name("findByUidSubCategory(uidSubCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findFavoriteEstablishmentUidUser:(NSString *)uidUser __attribute__((swift_name("findFavoriteEstablishment(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFavoriteEstablishmentInfo:(CommonKotlinPair<NSString *, CommonEstablishment *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFavoriteEstablishment(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateEstablishment:(CommonEstablishment *)establishment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(establishment:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("PaymentDataSource")))
@protocol CommonPaymentDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPayment:(CommonPayment *)payment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(payment:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemotePaymentDataSource")))
@interface CommonRemotePaymentDataSource : CommonBase <CommonPaymentDataSource>
- (instancetype)initWithFirestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(firestore:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPayment:(CommonPayment *)payment completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(payment:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
@end;

__attribute__((swift_name("CategoryEstablishmentDataSource")))
@protocol CommonCategoryEstablishmentDataSource
@required
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteCategoryEstablishmentDataSource")))
@interface CommonRemoteCategoryEstablishmentDataSource : CommonBase <CommonCategoryEstablishmentDataSource>
- (instancetype)initWithFirestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(firestore:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
@end;

__attribute__((swift_name("AdvertDataSource")))
@protocol CommonAdvertDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAdvert:(CommonAdvert *)advert completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(advert:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeParameters:(CommonAdvert *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(parameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateAdvert:(CommonAdvert *)advert completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(advert:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteAdvertDataSource")))
@interface CommonRemoteAdvertDataSource : CommonBase <CommonAdvertDataSource>
- (instancetype)initWithFirestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(firestore:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAdvert:(CommonAdvert *)advert completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(advert:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeParameters:(CommonAdvert *)parameters completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(parameters:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateAdvert:(CommonAdvert *)advert completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(advert:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("EventDataSource")))
@protocol CommonEventDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addEvent:(CommonEvent *)event completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(event:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFavoriteEventEventInfo:(CommonKotlinPair<NSString *, CommonEvent *> *)eventInfo completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFavoriteEvent(eventInfo:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidCategoryUidCategory:(NSString *)uidCategory __attribute__((swift_name("findByUidCategory(uidCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidEstablishmentUidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("findByUidEstablishment(uidEstablishment:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findFavoriteEventUidUser:(NSString *)uidUser __attribute__((swift_name("findFavoriteEvent(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeParameters:(CommonEvent *)parameters completionHandler_:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(parameters:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFavoriteEventEventInfo:(CommonKotlinPair<NSString *, CommonEvent *> *)eventInfo completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFavoriteEvent(eventInfo:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateEvent:(CommonEvent *)event completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(event:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteEventDataSource")))
@interface CommonRemoteEventDataSource : CommonBase <CommonEventDataSource>
- (instancetype)initWithFirestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(firestore:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addEvent:(CommonEvent *)event completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(event:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFavoriteEventEventInfo:(CommonKotlinPair<NSString *, CommonEvent *> *)eventInfo completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFavoriteEvent(eventInfo:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidCategoryUidCategory:(NSString *)uidCategory __attribute__((swift_name("findByUidCategory(uidCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidEstablishmentUidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("findByUidEstablishment(uidEstablishment:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findFavoriteEventUidUser:(NSString *)uidUser __attribute__((swift_name("findFavoriteEvent(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeParameters:(CommonEvent *)parameters completionHandler_:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(parameters:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeFavoriteEventEventInfo:(CommonKotlinPair<NSString *, CommonEvent *> *)eventInfo completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeFavoriteEvent(eventInfo:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateEvent:(CommonEvent *)event completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(event:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("PromotionDataSource")))
@protocol CommonPromotionDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(promotion:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidEstablishmentUidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("findByUidEstablishment(uidEstablishment:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removePromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(promotion:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(promotion:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemotePromotionDataSource")))
@interface CommonRemotePromotionDataSource : CommonBase <CommonPromotionDataSource>
- (instancetype)initWithFirestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(firestore:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(promotion:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUid:(NSString *)uid __attribute__((swift_name("findByUid(uid:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidEstablishmentUidEstablishment:(NSString *)uidEstablishment __attribute__((swift_name("findByUidEstablishment(uidEstablishment:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidOwnerUidOwner:(NSString *)uidOwner __attribute__((swift_name("findByUidOwner(uidOwner:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removePromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(promotion:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePromotion:(CommonPromotion *)promotion completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(promotion:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadImageParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("uploadImage(parameters:completionHandler:)")));
@end;

__attribute__((swift_name("SubCategoryEstablishmentDataSource")))
@protocol CommonSubCategoryEstablishmentDataSource
@required
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUidSubCategory:(NSString *)uidSubCategory __attribute__((swift_name("findByUid(uidSubCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidCategoryUidCategory:(NSString *)uidCategory __attribute__((swift_name("findByUidCategory(uidCategory:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteSubCategoryEstablishmentDataSource")))
@interface CommonRemoteSubCategoryEstablishmentDataSource : CommonBase <CommonSubCategoryEstablishmentDataSource>
- (instancetype)initWithFirestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(firestore:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKotlinx_coroutines_coreFlow>)findAll __attribute__((swift_name("findAll()")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidUidSubCategory:(NSString *)uidSubCategory __attribute__((swift_name("findByUid(uidSubCategory:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findByUidCategoryUidCategory:(NSString *)uidCategory __attribute__((swift_name("findByUidCategory(uidCategory:)")));
@end;

__attribute__((swift_name("AuthDataSource")))
@protocol CommonAuthDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithAuthCredentialCredential:(CommonFirebase_authAuthCredential *)credential completionHandler:(void (^)(CommonFirebase_authFirebaseUser * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithAuthCredential(credential:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteAuthDataSource")))
@interface CommonRemoteAuthDataSource : CommonBase <CommonAuthDataSource>
- (instancetype)initWithAuth:(CommonFirebase_authFirebaseAuth *)auth __attribute__((swift_name("init(auth:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginWithAuthCredentialCredential:(CommonFirebase_authAuthCredential *)credential completionHandler:(void (^)(CommonFirebase_authFirebaseUser * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loginWithAuthCredential(credential:completionHandler:)")));
@end;

__attribute__((swift_name("UserDataSource")))
@protocol CommonUserDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addUser:(CommonUser *)user completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(user:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)followInfo:(CommonKotlinPair<CommonUser *, CommonUser *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("follow(info:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getFollowersUidUser:(NSString *)uidUser __attribute__((swift_name("getFollowers(uidUser:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getFollowingsUidUser:(NSString *)uidUser __attribute__((swift_name("getFollowings(uidUser:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getUserByUidUidLikeUser:(NSString *)uidLikeUser __attribute__((swift_name("getUserByUid(uidLikeUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserByUidAsyncUidUser:(NSString *)uidUser completionHandler:(void (^)(CommonUser * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserByUidAsync(uidUser:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowInfo:(CommonKotlinPair<CommonUser *, CommonUser *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollow(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserPhotoParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUserPhoto(parameters:completionHandler:)")));
@property (readonly) BOOL isLogged __attribute__((swift_name("isLogged")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteUserDataSource")))
@interface CommonRemoteUserDataSource : CommonBase <CommonUserDataSource>
- (instancetype)initWithAuth:(CommonFirebase_authFirebaseAuth *)auth firestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(auth:firestore:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addUser:(CommonUser *)user completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(user:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)followInfo:(CommonKotlinPair<CommonUser *, CommonUser *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("follow(info:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getFollowersUidUser:(NSString *)uidUser __attribute__((swift_name("getFollowers(uidUser:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getFollowingsUidUser:(NSString *)uidUser __attribute__((swift_name("getFollowings(uidUser:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)getUserByUidUidLikeUser:(NSString *)uidLikeUser __attribute__((swift_name("getUserByUid(uidLikeUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserByUidAsyncUidUser:(NSString *)uidUser completionHandler:(void (^)(CommonUser * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserByUidAsync(uidUser:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowInfo:(CommonKotlinPair<CommonUser *, CommonUser *> *)info completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollow(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateUserPhotoParameters:(NSString *)parameters completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateUserPhoto(parameters:completionHandler:)")));
@property (readonly) BOOL isLogged __attribute__((swift_name("isLogged")));
@end;

__attribute__((swift_name("LikeContentDataSource")))
@protocol CommonLikeContentDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)disLikeContentContent:(CommonLikeContent *)content completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disLikeContent(content:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findLikeByUidContentUidContent:(NSString *)uidContent __attribute__((swift_name("findLikeByUidContent(uidContent:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findLikeByUidUserUidUser:(NSString *)uidUser __attribute__((swift_name("findLikeByUidUser(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)likeContentContent:(CommonLikeContent *)content completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("likeContent(content:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoteLikeContentDataSource")))
@interface CommonRemoteLikeContentDataSource : CommonBase <CommonLikeContentDataSource>
- (instancetype)initWithFirestore:(CommonFirebase_firestoreFirebaseFirestore *)firestore __attribute__((swift_name("init(firestore:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)disLikeContentContent:(CommonLikeContent *)content completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disLikeContent(content:completionHandler:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findLikeByUidContentUidContent:(NSString *)uidContent __attribute__((swift_name("findLikeByUidContent(uidContent:)")));
- (id<CommonKotlinx_coroutines_coreFlow>)findLikeByUidUserUidUser:(NSString *)uidUser __attribute__((swift_name("findLikeByUidUser(uidUser:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)likeContentContent:(CommonLikeContent *)content completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("likeContent(content:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeState")))
@interface CommonHomeState : CommonBase
- (instancetype)initWithIsLoading:(BOOL)isLoading user:(CommonUser * _Nullable)user establishments:(NSArray<CommonEstablishment *> *)establishments events:(NSArray<CommonEvent *> *)events promotions:(NSArray<CommonPromotion *> *)promotions adverts:(NSArray<CommonAdvert *> *)adverts __attribute__((swift_name("init(isLoading:user:establishments:events:promotions:adverts:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (CommonUser * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<CommonEstablishment *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<CommonEvent *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<CommonPromotion *> *)component5 __attribute__((swift_name("component5()")));
- (NSArray<CommonAdvert *> *)component6 __attribute__((swift_name("component6()")));
- (CommonHomeState *)doCopyIsLoading:(BOOL)isLoading user:(CommonUser * _Nullable)user establishments:(NSArray<CommonEstablishment *> *)establishments events:(NSArray<CommonEvent *> *)events promotions:(NSArray<CommonPromotion *> *)promotions adverts:(NSArray<CommonAdvert *> *)adverts __attribute__((swift_name("doCopy(isLoading:user:establishments:events:promotions:adverts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<CommonAdvert *> *adverts __attribute__((swift_name("adverts")));
@property (readonly) NSArray<CommonEstablishment *> *establishments __attribute__((swift_name("establishments")));
@property (readonly) NSArray<CommonEvent *> *events __attribute__((swift_name("events")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) NSArray<CommonPromotion *> *promotions __attribute__((swift_name("promotions")));
@property (readonly) CommonUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Orbit_coreContainerHost")))
@protocol CommonOrbit_coreContainerHost
@required
@property (readonly) id<CommonOrbit_coreContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol CommonKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<CommonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeViewModel")))
@interface CommonHomeViewModel : CommonBase <CommonOrbit_coreContainerHost, CommonKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithGetCurrentUserUseCase:(CommonGetCurrentUserUseCase *)getCurrentUserUseCase findAllEventUseCase:(CommonFindAllEventUseCase *)findAllEventUseCase findAllEstablishmentUseCase:(CommonFindAllEstablishmentUseCase *)findAllEstablishmentUseCase findAllAdvertUseCase:(CommonFindAllAdvertUseCase *)findAllAdvertUseCase findAllPromotionUseCase:(CommonFindAllPromotionUseCase *)findAllPromotionUseCase __attribute__((swift_name("init(getCurrentUserUseCase:findAllEventUseCase:findAllEstablishmentUseCase:findAllAdvertUseCase:findAllPromotionUseCase:)"))) __attribute__((objc_designated_initializer));
- (void)fetchCurrentUser __attribute__((swift_name("fetchCurrentUser()")));
- (void)fetchHomeInfo __attribute__((swift_name("fetchHomeInfo()")));
- (void)fetchHomeInfoByKeywordKeyword:(NSString *)keyword __attribute__((swift_name("fetchHomeInfoByKeyword(keyword:)")));
- (void)filterAlphabetically __attribute__((swift_name("filterAlphabetically()")));
- (void)filterNearBy __attribute__((swift_name("filterNearBy()")));
@property (readonly) id<CommonOrbit_coreContainer> container __attribute__((swift_name("container")));
@property (readonly) id<CommonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

@interface CommonResult (Extensions)
- (id _Nullable)successOrFallback:(id _Nullable)fallback __attribute__((swift_name("successOr(fallback:)")));
@property (readonly) id _Nullable data_ __attribute__((swift_name("data_")));
@property (readonly) BOOL succeeded __attribute__((swift_name("succeeded")));
@end;

__attribute__((swift_name("Firebase_firestoreQuery")))
@interface CommonFirebase_firestoreQuery : CommonBase
- (instancetype)initWithIos:(FIRQuery *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(CommonFirebase_firestoreQuerySnapshot * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));
- (CommonFirebase_firestoreQuery *)limitLimit:(id)limit __attribute__((swift_name("limit(limit:)")));
@property (readonly) FIRQuery *ios __attribute__((swift_name("ios")));
@property (readonly) id<CommonKotlinx_coroutines_coreFlow> snapshots __attribute__((swift_name("snapshots")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreCollectionReference")))
@interface CommonFirebase_firestoreCollectionReference : CommonFirebase_firestoreQuery
- (instancetype)initWithIos:(FIRCollectionReference *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addData:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults completionHandler:(void (^)(CommonFirebase_firestoreDocumentReference * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(data:encodeDefaults:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addData:(id _Nullable)data strategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy encodeDefaults:(BOOL)encodeDefaults completionHandler:(void (^)(CommonFirebase_firestoreDocumentReference * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(data:strategy:encodeDefaults:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addStrategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults completionHandler:(void (^)(CommonFirebase_firestoreDocumentReference * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(strategy:data:encodeDefaults:completionHandler:)")));
- (CommonFirebase_firestoreDocumentReference *)documentDocumentPath:(NSString *)documentPath __attribute__((swift_name("document(documentPath:)")));
@property (readonly) CommonFirebase_firestoreDocumentReference *document __attribute__((swift_name("document")));
@property (readonly) FIRCollectionReference *ios __attribute__((swift_name("ios")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@end;

@interface CommonFirebase_firestoreCollectionReference (Extensions)
- (id<CommonKotlinx_coroutines_coreFlow>)toFlowOfResult __attribute__((swift_name("toFlowOfResult()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreDocumentReference")))
@interface CommonFirebase_firestoreDocumentReference : CommonBase
- (instancetype)initWithIos:(FIRDocumentReference *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
- (CommonFirebase_firestoreCollectionReference *)collectionCollectionPath:(NSString *)collectionPath __attribute__((swift_name("collection(collectionPath:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getWithCompletionHandler:(void (^)(CommonFirebase_firestoreDocumentSnapshot * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)setData:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults mergeFieldPaths:(CommonKotlinArray<CommonFirebase_firestoreFieldPath *> *)mergeFieldPaths completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("set(data:encodeDefaults:mergeFieldPaths:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)setData:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults mergeFields:(CommonKotlinArray<NSString *> *)mergeFields completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("set(data:encodeDefaults:mergeFields:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)setData:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults merge:(BOOL)merge completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("set(data:encodeDefaults:merge:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)setStrategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults mergeFieldPaths:(CommonKotlinArray<CommonFirebase_firestoreFieldPath *> *)mergeFieldPaths completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("set(strategy:data:encodeDefaults:mergeFieldPaths:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)setStrategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults mergeFields:(CommonKotlinArray<NSString *> *)mergeFields completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("set(strategy:data:encodeDefaults:mergeFields:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)setStrategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults merge:(BOOL)merge completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("set(strategy:data:encodeDefaults:merge:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateData:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(data:encodeDefaults:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateFieldsAndValues:(CommonKotlinArray<CommonKotlinPair<CommonFirebase_firestoreFieldPath *, id> *> *)fieldsAndValues completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(fieldsAndValues:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateFieldsAndValues:(CommonKotlinArray<CommonKotlinPair<NSString *, id> *> *)fieldsAndValues completionHandler_:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(fieldsAndValues:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStrategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(strategy:data:encodeDefaults:completionHandler:)")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) FIRDocumentReference *ios __attribute__((swift_name("ios")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) id<CommonKotlinx_coroutines_coreFlow> snapshots __attribute__((swift_name("snapshots")));
@end;

@interface CommonFirebase_firestoreDocumentReference (Extensions)
- (id<CommonKotlinx_coroutines_coreFlow>)toFlowOfResult __attribute__((swift_name("toFlowOfResult()")));
@end;

@interface CommonFirebase_firestoreQuery (Extensions)
- (id<CommonKotlinx_coroutines_coreFlow>)toFlowOfResult_ __attribute__((swift_name("toFlowOfResult_()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EstablishmentKt")))
@interface CommonEstablishmentKt : CommonBase
+ (BOOL)containsEstablishmentWithUid:(NSArray<CommonEstablishment *> *)receiver uid:(NSString *)uid __attribute__((swift_name("containsEstablishmentWithUid(_:uid:)")));
+ (NSArray<CommonEstablishment *> *)filterByKeyword:(NSArray<CommonEstablishment *> *)receiver keyword:(NSString *)keyword __attribute__((swift_name("filterByKeyword(_:keyword:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventKt")))
@interface CommonEventKt : CommonBase
+ (BOOL)containsEventWithUid:(NSArray<CommonEvent *> *)receiver uidEvent:(NSString *)uidEvent __attribute__((swift_name("containsEventWithUid(_:uidEvent:)")));
+ (NSArray<CommonEvent *> *)filterByKeyword:(NSArray<CommonEvent *> *)receiver keyword:(NSString *)keyword __attribute__((swift_name("filterByKeyword(_:keyword:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LikeContentKt")))
@interface CommonLikeContentKt : CommonBase
+ (BOOL)containsLikeContent:(NSArray<CommonLikeContent *> *)receiver uid:(NSString *)uid __attribute__((swift_name("containsLikeContent(_:uid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserKt")))
@interface CommonUserKt : CommonBase
+ (BOOL)containsUser:(NSArray<CommonUser *> *)receiver uid:(NSString *)uid __attribute__((swift_name("containsUser(_:uid:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdvertKt")))
@interface CommonAdvertKt : CommonBase
+ (NSArray<CommonAdvert *> *)filterByKeyword:(NSArray<CommonAdvert *> *)receiver keyword:(NSString *)keyword __attribute__((swift_name("filterByKeyword(_:keyword:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PromotionKt")))
@interface CommonPromotionKt : CommonBase
+ (NSArray<CommonPromotion *> *)filterByKeyword:(NSArray<CommonPromotion *> *)receiver keyword:(NSString *)keyword __attribute__((swift_name("filterByKeyword(_:keyword:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubCategoryEstablishmentKt")))
@interface CommonSubCategoryEstablishmentKt : CommonBase
+ (NSArray<CommonSubCategoryEstablishment *> *)filterByKeyword:(NSArray<CommonSubCategoryEstablishment *> *)receiver keyword:(NSString *)keyword __attribute__((swift_name("filterByKeyword(_:keyword:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface CommonKoinKt : CommonBase
+ (void)doInitKoin __attribute__((swift_name("doInitKoin()")));
+ (NSArray<CommonKoin_coreModule *> *)koinModules __attribute__((swift_name("koinModules()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineModuleKt")))
@interface CommonCoroutineModuleKt : CommonBase
@property (class, readonly) CommonKoin_coreModule *coroutineModule __attribute__((swift_name("coroutineModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataSourceModuleKt")))
@interface CommonDataSourceModuleKt : CommonBase
@property (class, readonly) CommonKoin_coreModule *dataSourceModule __attribute__((swift_name("dataSourceModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapperModuleKt")))
@interface CommonMapperModuleKt : CommonBase
@property (class, readonly) CommonKoin_coreModule *mapperModule __attribute__((swift_name("mapperModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RepositoryModuleKt")))
@interface CommonRepositoryModuleKt : CommonBase
@property (class, readonly) CommonKoin_coreModule *repositoryModule __attribute__((swift_name("repositoryModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UseCaseModuleKt")))
@interface CommonUseCaseModuleKt : CommonBase
@property (class, readonly) CommonKoin_coreModule *useCaseModule __attribute__((swift_name("useCaseModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewModelKt")))
@interface CommonViewModelKt : CommonBase
@property (class, readonly) CommonKoin_coreModule *viewModelModule __attribute__((swift_name("viewModelModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirestoreExtensionKt")))
@interface CommonFirestoreExtensionKt : CommonBase
+ (id<CommonKotlinx_coroutines_coreFlow>)toObject:(id<CommonKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("toObject(_:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol CommonKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<CommonKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<CommonKotlinCoroutineContextElement> _Nullable)getKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<CommonKotlinCoroutineContext>)minusKeyKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<CommonKotlinCoroutineContext>)plusContext:(id<CommonKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol CommonKotlinCoroutineContextElement <CommonKotlinCoroutineContext>
@required
@property (readonly) id<CommonKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface CommonKotlinAbstractCoroutineContextElement : CommonBase <CommonKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<CommonKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol CommonKotlinContinuationInterceptor <CommonKotlinCoroutineContextElement>
@required
- (id<CommonKotlinContinuation>)interceptContinuationContinuation:(id<CommonKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<CommonKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface CommonKotlinx_coroutines_coreCoroutineDispatcher : CommonKotlinAbstractCoroutineContextElement <CommonKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<CommonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) CommonKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<CommonKotlinCoroutineContext>)context block:(id<CommonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<CommonKotlinCoroutineContext>)context block:(id<CommonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<CommonKotlinContinuation>)interceptContinuationContinuation:(id<CommonKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<CommonKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (CommonKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<CommonKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface CommonKotlinThrowable : CommonBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface CommonKotlinException : CommonKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface CommonKotlinRuntimeException : CommonKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface CommonKotlinIllegalStateException : CommonKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface CommonKotlinCancellationException : CommonKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(CommonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface CommonKotlinUnit : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface CommonKotlinPair<__covariant A, __covariant B> : CommonBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (CommonKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol CommonKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<CommonKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("Firebase_authAuthCredential")))
@interface CommonFirebase_authAuthCredential : CommonBase
- (instancetype)initWithIos:(FIRAuthCredential *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) FIRAuthCredential *ios __attribute__((swift_name("ios")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authFirebaseUser")))
@interface CommonFirebase_authFirebaseUser : CommonBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIdTokenForceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getIdToken(forceRefresh:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIdTokenResultForceRefresh:(BOOL)forceRefresh completionHandler:(void (^)(CommonFirebase_authAuthTokenResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getIdTokenResult(forceRefresh:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)linkWithCredentialCredential:(CommonFirebase_authAuthCredential *)credential completionHandler:(void (^)(CommonFirebase_authAuthResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("linkWithCredential(credential:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)reauthenticateCredential:(CommonFirebase_authAuthCredential *)credential completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reauthenticate(credential:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)reauthenticateAndRetrieveDataCredential:(CommonFirebase_authAuthCredential *)credential completionHandler:(void (^)(CommonFirebase_authAuthResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reauthenticateAndRetrieveData(credential:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)reloadWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reload(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendEmailVerificationActionCodeSettings:(CommonFirebase_authActionCodeSettings * _Nullable)actionCodeSettings completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendEmailVerification(actionCodeSettings:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)unlinkProvider:(NSString *)provider completionHandler:(void (^)(CommonFirebase_authFirebaseUser * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("unlink(provider:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateEmailEmail:(NSString *)email completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateEmail(email:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePasswordPassword:(NSString *)password completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updatePassword(password:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePhoneNumberCredential:(CommonFirebase_authPhoneAuthCredential *)credential completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updatePhoneNumber(credential:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateProfileDisplayName:(NSString * _Nullable)displayName photoUrl:(NSString * _Nullable)photoUrl completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateProfile(displayName:photoUrl:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyBeforeUpdateEmailNewEmail:(NSString *)newEmail actionCodeSettings:(CommonFirebase_authActionCodeSettings * _Nullable)actionCodeSettings completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyBeforeUpdateEmail(newEmail:actionCodeSettings:completionHandler:)")));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) FIRUser *ios __attribute__((swift_name("ios")));
@property (readonly) BOOL isAnonymous __attribute__((swift_name("isAnonymous")));
@property (readonly) BOOL isEmailVerified __attribute__((swift_name("isEmailVerified")));
@property (readonly) CommonFirebase_authUserMetaData * _Nullable metaData __attribute__((swift_name("metaData")));
@property (readonly) CommonFirebase_authMultiFactor *multiFactor __attribute__((swift_name("multiFactor")));
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) NSString * _Nullable photoURL __attribute__((swift_name("photoURL")));
@property (readonly) NSArray<CommonFirebase_authUserInfo *> *providerData __attribute__((swift_name("providerData")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface CommonKotlinEnumCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface CommonKotlinArray<T> : CommonBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(CommonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<CommonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface CommonKoin_coreKoin : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (CommonKoin_coreScope *)createScopeT:(id<CommonKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (CommonKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (CommonKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (CommonKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<CommonKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<CommonKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (CommonKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (CommonKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<CommonKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (CommonKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (CommonKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<CommonKotlinLazy>)injectQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier mode:(CommonKotlinLazyThreadSafetyMode *)mode parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<CommonKotlinLazy>)injectOrNullQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier mode:(CommonKotlinLazyThreadSafetyMode *)mode parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<CommonKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(CommonKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<CommonKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) CommonKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) CommonKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) CommonKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) CommonKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface CommonKotlinNothing : CommonBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreFirebaseFirestore")))
@interface CommonFirebase_firestoreFirebaseFirestore : CommonBase
- (instancetype)initWithIos:(FIRFirestore *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
- (CommonFirebase_firestoreWriteBatch *)batch __attribute__((swift_name("batch()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearPersistenceWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clearPersistence(completionHandler:)")));
- (CommonFirebase_firestoreCollectionReference *)collectionCollectionPath:(NSString *)collectionPath __attribute__((swift_name("collection(collectionPath:)")));
- (CommonFirebase_firestoreQuery *)collectionGroupCollectionId:(NSString *)collectionId __attribute__((swift_name("collectionGroup(collectionId:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)disableNetworkWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("disableNetwork(completionHandler:)")));
- (CommonFirebase_firestoreDocumentReference *)documentDocumentPath:(NSString *)documentPath __attribute__((swift_name("document(documentPath:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)enableNetworkWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("enableNetwork(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)runTransactionFunc:(id<CommonKotlinSuspendFunction1>)func completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("runTransaction(func:completionHandler:)")));
- (void)setLoggingEnabledLoggingEnabled:(BOOL)loggingEnabled __attribute__((swift_name("setLoggingEnabled(loggingEnabled:)")));
- (void)setSettingsPersistenceEnabled:(CommonBoolean * _Nullable)persistenceEnabled sslEnabled:(CommonBoolean * _Nullable)sslEnabled host:(NSString * _Nullable)host cacheSizeBytes:(CommonLong * _Nullable)cacheSizeBytes __attribute__((swift_name("setSettings(persistenceEnabled:sslEnabled:host:cacheSizeBytes:)")));
- (void)useEmulatorHost:(NSString *)host port:(int32_t)port __attribute__((swift_name("useEmulator(host:port:)")));
@property (readonly) FIRFirestore *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authFirebaseAuth")))
@interface CommonFirebase_authFirebaseAuth : CommonBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)applyActionCodeCode:(NSString *)code completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("applyActionCode(code:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkActionCodeCode:(NSString *)code completionHandler:(void (^)(CommonFirebase_authActionCodeResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkActionCode(code:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmPasswordResetCode:(NSString *)code newPassword:(NSString *)newPassword completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("confirmPasswordReset(code:newPassword:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createUserWithEmailAndPasswordEmail:(NSString *)email password:(NSString *)password completionHandler:(void (^)(CommonFirebase_authAuthResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createUserWithEmailAndPassword(email:password:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchSignInMethodsForEmailEmail:(NSString *)email completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchSignInMethodsForEmail(email:completionHandler:)")));
- (BOOL)isSignInWithEmailLinkLink:(NSString *)link __attribute__((swift_name("isSignInWithEmailLink(link:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendPasswordResetEmailEmail:(NSString *)email actionCodeSettings:(CommonFirebase_authActionCodeSettings * _Nullable)actionCodeSettings completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendPasswordResetEmail(email:actionCodeSettings:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendSignInLinkToEmailEmail:(NSString *)email actionCodeSettings:(CommonFirebase_authActionCodeSettings *)actionCodeSettings completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendSignInLinkToEmail(email:actionCodeSettings:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInAnonymouslyWithCompletionHandler:(void (^)(CommonFirebase_authAuthResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInAnonymously(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInWithCredentialAuthCredential:(CommonFirebase_authAuthCredential *)authCredential completionHandler:(void (^)(CommonFirebase_authAuthResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInWithCredential(authCredential:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInWithCustomTokenToken:(NSString *)token completionHandler:(void (^)(CommonFirebase_authAuthResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInWithCustomToken(token:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInWithEmailAndPasswordEmail:(NSString *)email password:(NSString *)password completionHandler:(void (^)(CommonFirebase_authAuthResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInWithEmailAndPassword(email:password:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signInWithEmailLinkEmail:(NSString *)email link:(NSString *)link completionHandler:(void (^)(CommonFirebase_authAuthResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signInWithEmailLink(email:link:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)signOutWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("signOut(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateCurrentUserUser:(CommonFirebase_authFirebaseUser *)user completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateCurrentUser(user:completionHandler:)")));
- (void)useEmulatorHost:(NSString *)host port:(int32_t)port __attribute__((swift_name("useEmulator(host:port:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyPasswordResetCodeCode:(NSString *)code completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyPasswordResetCode(code:completionHandler:)")));
@property (readonly) id<CommonKotlinx_coroutines_coreFlow> authStateChanged __attribute__((swift_name("authStateChanged")));
@property (readonly) CommonFirebase_authFirebaseUser * _Nullable currentUser __attribute__((swift_name("currentUser")));
@property (readonly) id<CommonKotlinx_coroutines_coreFlow> idTokenChanged __attribute__((swift_name("idTokenChanged")));
@property (readonly) FIRAuth *ios __attribute__((swift_name("ios")));
@property NSString *languageCode __attribute__((swift_name("languageCode")));
@end;

__attribute__((swift_name("Orbit_coreContainer")))
@protocol CommonOrbit_coreContainer
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)orbitOrbitIntent:(id<CommonKotlinSuspendFunction1>)orbitIntent completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("orbit(orbitIntent:completionHandler:)")));
@property (readonly) CommonOrbit_coreContainerSettings *settings __attribute__((swift_name("settings")));
@property (readonly) id<CommonKotlinx_coroutines_coreFlow> sideEffectFlow __attribute__((swift_name("sideEffectFlow")));
@property (readonly) id<CommonKotlinx_coroutines_coreStateFlow> stateFlow __attribute__((swift_name("stateFlow")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreQuerySnapshot")))
@interface CommonFirebase_firestoreQuerySnapshot : CommonBase
- (instancetype)initWithIos:(FIRQuerySnapshot *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<CommonFirebase_firestoreDocumentChange *> *documentChanges __attribute__((swift_name("documentChanges")));
@property (readonly) NSArray<CommonFirebase_firestoreDocumentSnapshot *> *documents __attribute__((swift_name("documents")));
@property (readonly) FIRQuerySnapshot *ios __attribute__((swift_name("ios")));
@property (readonly) CommonFirebase_firestoreSnapshotMetadata *metadata __attribute__((swift_name("metadata")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol CommonKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<CommonKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<CommonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreDocumentSnapshot")))
@interface CommonFirebase_firestoreDocumentSnapshot : CommonBase
- (instancetype)initWithIos:(FIRDocumentSnapshot *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
- (BOOL)containsField:(NSString *)field __attribute__((swift_name("contains(field:)")));
- (id)data __attribute__((swift_name("data()")));
- (id _Nullable)dataStrategy:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)strategy __attribute__((swift_name("data(strategy:)")));
- (NSDictionary<NSString *, id> *)dataMap __attribute__((swift_name("dataMap()")));
- (id _Nullable)getField:(NSString *)field __attribute__((swift_name("get(field:)")));
- (id _Nullable)getField:(NSString *)field strategy:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)strategy __attribute__((swift_name("get(field:strategy:)")));
@property (readonly) BOOL exists __attribute__((swift_name("exists")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) FIRDocumentSnapshot *ios __attribute__((swift_name("ios")));
@property (readonly) CommonFirebase_firestoreSnapshotMetadata *metadata __attribute__((swift_name("metadata")));
@property (readonly) CommonFirebase_firestoreDocumentReference *reference __attribute__((swift_name("reference")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreFieldPath")))
@interface CommonFirebase_firestoreFieldPath : CommonBase
- (instancetype)initWithFieldNames:(CommonKotlinArray<NSString *> *)fieldNames __attribute__((swift_name("init(fieldNames:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CommonFirebase_firestoreFieldPath *documentId __attribute__((swift_name("documentId")));
@property (readonly) FIRFieldPath *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface CommonKoin_coreModule : CommonBase
- (instancetype)initWithCreatedAtStart:(BOOL)createdAtStart __attribute__((swift_name("init(createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSArray<CommonKoin_coreModule *> *)plusModules:(NSArray<CommonKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<CommonKoin_coreModule *> *)plusModule:(CommonKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<CommonKoin_coreQualifier>)qualifier scopeSet:(void (^)(CommonKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(CommonKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) BOOL createdAtStart __attribute__((swift_name("createdAtStart")));
@property (readonly) CommonMutableSet<CommonKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol CommonKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol CommonKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<CommonKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface CommonKotlinAbstractCoroutineContextKey<B, E> : CommonBase <CommonKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<CommonKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<CommonKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface CommonKotlinx_coroutines_coreCoroutineDispatcherKey : CommonKotlinAbstractCoroutineContextKey<id<CommonKotlinContinuationInterceptor>, CommonKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<CommonKotlinCoroutineContextKey>)baseKey safeCast:(id<CommonKotlinCoroutineContextElement> _Nullable (^)(id<CommonKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol CommonKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol CommonKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authAuthTokenResult")))
@interface CommonFirebase_authAuthTokenResult : CommonBase
- (instancetype)initWithIos:(FIRAuthTokenResult *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSDictionary<NSString *, id> *claims __attribute__((swift_name("claims")));
@property (readonly) FIRAuthTokenResult *ios __attribute__((swift_name("ios")));
@property (readonly) NSString * _Nullable signInProvider __attribute__((swift_name("signInProvider")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authAuthResult")))
@interface CommonFirebase_authAuthResult : CommonBase
@property (readonly) FIRAuthDataResult *ios __attribute__((swift_name("ios")));
@property (readonly) CommonFirebase_authFirebaseUser * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authActionCodeSettings")))
@interface CommonFirebase_authActionCodeSettings : CommonBase
- (instancetype)initWithUrl:(NSString *)url androidPackageName:(CommonFirebase_authAndroidPackageName * _Nullable)androidPackageName dynamicLinkDomain:(NSString * _Nullable)dynamicLinkDomain canHandleCodeInApp:(BOOL)canHandleCodeInApp iOSBundleId:(NSString * _Nullable)iOSBundleId __attribute__((swift_name("init(url:androidPackageName:dynamicLinkDomain:canHandleCodeInApp:iOSBundleId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (CommonFirebase_authAndroidPackageName * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (CommonFirebase_authActionCodeSettings *)doCopyUrl:(NSString *)url androidPackageName:(CommonFirebase_authAndroidPackageName * _Nullable)androidPackageName dynamicLinkDomain:(NSString * _Nullable)dynamicLinkDomain canHandleCodeInApp:(BOOL)canHandleCodeInApp iOSBundleId:(NSString * _Nullable)iOSBundleId __attribute__((swift_name("doCopy(url:androidPackageName:dynamicLinkDomain:canHandleCodeInApp:iOSBundleId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) CommonFirebase_authAndroidPackageName * _Nullable androidPackageName __attribute__((swift_name("androidPackageName")));
@property (readonly) BOOL canHandleCodeInApp __attribute__((swift_name("canHandleCodeInApp")));
@property (readonly) NSString * _Nullable dynamicLinkDomain __attribute__((swift_name("dynamicLinkDomain")));
@property (readonly) NSString * _Nullable iOSBundleId __attribute__((swift_name("iOSBundleId")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authPhoneAuthCredential")))
@interface CommonFirebase_authPhoneAuthCredential : CommonFirebase_authAuthCredential
- (instancetype)initWithIos:(FIRPhoneAuthCredential *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) FIRPhoneAuthCredential *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authUserMetaData")))
@interface CommonFirebase_authUserMetaData : CommonBase
- (instancetype)initWithIos:(FIRUserMetadata *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CommonDouble * _Nullable creationTime __attribute__((swift_name("creationTime")));
@property (readonly) FIRUserMetadata *ios __attribute__((swift_name("ios")));
@property (readonly) CommonDouble * _Nullable lastSignInTime __attribute__((swift_name("lastSignInTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authMultiFactor")))
@interface CommonFirebase_authMultiFactor : CommonBase
- (instancetype)initWithIos:(FIRMultiFactor *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)enrollMultiFactorAssertion:(CommonFirebase_authMultiFactorAssertion *)multiFactorAssertion displayName:(NSString * _Nullable)displayName completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("enroll(multiFactorAssertion:displayName:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSessionWithCompletionHandler:(void (^)(CommonFirebase_authMultiFactorSession * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSession(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)unenrollMultiFactorInfo:(CommonFirebase_authMultiFactorInfo *)multiFactorInfo completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unenroll(multiFactorInfo:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)unenrollFactorUid:(NSString *)factorUid completionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unenroll(factorUid:completionHandler:)")));
@property (readonly) NSArray<CommonFirebase_authMultiFactorInfo *> *enrolledFactors __attribute__((swift_name("enrolledFactors")));
@property (readonly) FIRMultiFactor *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authUserInfo")))
@interface CommonFirebase_authUserInfo : CommonBase
- (instancetype)initWithIos:(id<FIRUserInfo>)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) id<FIRUserInfo> ios __attribute__((swift_name("ios")));
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) NSString * _Nullable photoURL __attribute__((swift_name("photoURL")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol CommonKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface CommonKoin_coreScope : CommonBase
- (instancetype)initWithScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<CommonKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (CommonKoin_coreScope *)doCopyScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<CommonKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<CommonKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (CommonKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (NSString *)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (NSString *)getPropertyKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (NSString * _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (CommonKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<CommonKotlinLazy>)injectQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier mode:(CommonKotlinLazyThreadSafetyMode *)mode parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<CommonKotlinLazy>)injectOrNullQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier mode:(CommonKotlinLazyThreadSafetyMode *)mode parameters:(CommonKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(CommonKotlinArray<CommonKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<CommonKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(CommonKotlinArray<CommonKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<CommonKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) CommonKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<CommonKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol CommonKoin_coreKoinScopeComponent <CommonKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) CommonKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Koin_coreQualifier")))
@protocol CommonKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol CommonKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol CommonKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol CommonKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol CommonKotlinKClass <CommonKotlinKDeclarationContainer, CommonKotlinKAnnotatedElement, CommonKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface CommonKoin_coreParametersHolder : CommonBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (CommonKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<CommonKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<CommonKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (CommonKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol CommonKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface CommonKotlinLazyThreadSafetyMode : CommonKotlinEnum<CommonKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) CommonKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) CommonKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (CommonKotlinArray<CommonKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Koin_coreLogger")))
@interface CommonKoin_coreLogger : CommonBase
- (instancetype)initWithLevel:(CommonKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(CommonKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(CommonKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(CommonKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property CommonKoin_coreLevel *level __attribute__((swift_name("level")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface CommonKoin_coreInstanceRegistry : CommonBase
- (instancetype)initWith_koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(CommonKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) CommonKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, CommonKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface CommonKoin_corePropertyRegistry : CommonBase
- (instancetype)initWith_koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface CommonKoin_coreScopeRegistry : CommonBase
- (instancetype)initWith_koin:(CommonKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSArray<CommonKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) CommonKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<CommonKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreWriteBatch")))
@interface CommonFirebase_firestoreWriteBatch : CommonBase
- (instancetype)initWithIos:(FIRWriteBatch *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)commitWithCompletionHandler:(void (^)(CommonKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("commit(completionHandler:)")));
- (CommonFirebase_firestoreWriteBatch *)deleteDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef __attribute__((swift_name("delete(documentRef:)")));
- (CommonFirebase_firestoreWriteBatch *)setDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults mergeFieldPaths:(CommonKotlinArray<CommonFirebase_firestoreFieldPath *> *)mergeFieldPaths __attribute__((swift_name("set(documentRef:data:encodeDefaults:mergeFieldPaths:)")));
- (CommonFirebase_firestoreWriteBatch *)setDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults mergeFields:(CommonKotlinArray<NSString *> *)mergeFields __attribute__((swift_name("set(documentRef:data:encodeDefaults:mergeFields:)")));
- (CommonFirebase_firestoreWriteBatch *)setDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults merge:(BOOL)merge __attribute__((swift_name("set(documentRef:data:encodeDefaults:merge:)")));
- (CommonFirebase_firestoreWriteBatch *)setDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef strategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults mergeFieldPaths:(CommonKotlinArray<CommonFirebase_firestoreFieldPath *> *)mergeFieldPaths __attribute__((swift_name("set(documentRef:strategy:data:encodeDefaults:mergeFieldPaths:)")));
- (CommonFirebase_firestoreWriteBatch *)setDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef strategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults mergeFields:(CommonKotlinArray<NSString *> *)mergeFields __attribute__((swift_name("set(documentRef:strategy:data:encodeDefaults:mergeFields:)")));
- (CommonFirebase_firestoreWriteBatch *)setDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef strategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults merge:(BOOL)merge __attribute__((swift_name("set(documentRef:strategy:data:encodeDefaults:merge:)")));
- (CommonFirebase_firestoreWriteBatch *)updateDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults __attribute__((swift_name("update(documentRef:data:encodeDefaults:)")));
- (CommonFirebase_firestoreWriteBatch *)updateDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef fieldsAndValues:(CommonKotlinArray<CommonKotlinPair<CommonFirebase_firestoreFieldPath *, id> *> *)fieldsAndValues __attribute__((swift_name("update(documentRef:fieldsAndValues:)")));
- (CommonFirebase_firestoreWriteBatch *)updateDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef fieldsAndValues_:(CommonKotlinArray<CommonKotlinPair<NSString *, id> *> *)fieldsAndValues __attribute__((swift_name("update(documentRef:fieldsAndValues_:)")));
- (CommonFirebase_firestoreWriteBatch *)updateDocumentRef:(CommonFirebase_firestoreDocumentReference *)documentRef strategy:(id<CommonKotlinx_serialization_coreSerializationStrategy>)strategy data:(id _Nullable)data encodeDefaults:(BOOL)encodeDefaults __attribute__((swift_name("update(documentRef:strategy:data:encodeDefaults:)")));
@property (readonly) FIRWriteBatch *ios __attribute__((swift_name("ios")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol CommonKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol CommonKotlinSuspendFunction1 <CommonKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("Firebase_authActionCodeResult")))
@interface CommonFirebase_authActionCodeResult : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Orbit_coreContainerSettings")))
@interface CommonOrbit_coreContainerSettings : CommonBase
- (instancetype)initWithSideEffectBufferSize:(int32_t)sideEffectBufferSize idlingRegistry:(id<CommonOrbit_coreIdlingResource>)idlingRegistry intentDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)intentDispatcher exceptionHandler:(id<CommonKotlinx_coroutines_coreCoroutineExceptionHandler> _Nullable)exceptionHandler repeatOnSubscribedStopTimeout:(int64_t)repeatOnSubscribedStopTimeout __attribute__((swift_name("init(sideEffectBufferSize:idlingRegistry:intentDispatcher:exceptionHandler:repeatOnSubscribedStopTimeout:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (id<CommonOrbit_coreIdlingResource>)component2 __attribute__((swift_name("component2()")));
- (CommonKotlinx_coroutines_coreCoroutineDispatcher *)component3 __attribute__((swift_name("component3()")));
- (id<CommonKotlinx_coroutines_coreCoroutineExceptionHandler> _Nullable)component4 __attribute__((swift_name("component4()")));
- (int64_t)component5 __attribute__((swift_name("component5()")));
- (CommonOrbit_coreContainerSettings *)doCopySideEffectBufferSize:(int32_t)sideEffectBufferSize idlingRegistry:(id<CommonOrbit_coreIdlingResource>)idlingRegistry intentDispatcher:(CommonKotlinx_coroutines_coreCoroutineDispatcher *)intentDispatcher exceptionHandler:(id<CommonKotlinx_coroutines_coreCoroutineExceptionHandler> _Nullable)exceptionHandler repeatOnSubscribedStopTimeout:(int64_t)repeatOnSubscribedStopTimeout __attribute__((swift_name("doCopy(sideEffectBufferSize:idlingRegistry:intentDispatcher:exceptionHandler:repeatOnSubscribedStopTimeout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<CommonKotlinx_coroutines_coreCoroutineExceptionHandler> _Nullable exceptionHandler __attribute__((swift_name("exceptionHandler")));
@property (readonly) id<CommonOrbit_coreIdlingResource> idlingRegistry __attribute__((swift_name("idlingRegistry")));
@property (readonly) CommonKotlinx_coroutines_coreCoroutineDispatcher *intentDispatcher __attribute__((swift_name("intentDispatcher")));
@property (readonly) int64_t repeatOnSubscribedStopTimeout __attribute__((swift_name("repeatOnSubscribedStopTimeout")));
@property (readonly) int32_t sideEffectBufferSize __attribute__((swift_name("sideEffectBufferSize")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol CommonKotlinx_coroutines_coreSharedFlow <CommonKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol CommonKotlinx_coroutines_coreStateFlow <CommonKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreDocumentChange")))
@interface CommonFirebase_firestoreDocumentChange : CommonBase
- (instancetype)initWithIos:(FIRDocumentChange *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CommonFirebase_firestoreDocumentSnapshot *document __attribute__((swift_name("document")));
@property (readonly) FIRDocumentChange *ios __attribute__((swift_name("ios")));
@property (readonly, getter=doNewIndex) int32_t newIndex __attribute__((swift_name("newIndex")));
@property (readonly) int32_t oldIndex __attribute__((swift_name("oldIndex")));
@property (readonly) CommonFirebase_firestoreChangeType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreSnapshotMetadata")))
@interface CommonFirebase_firestoreSnapshotMetadata : CommonBase
- (instancetype)initWithIos:(FIRSnapshotMetadata *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) BOOL hasPendingWrites __attribute__((swift_name("hasPendingWrites")));
@property (readonly) FIRSnapshotMetadata *ios __attribute__((swift_name("ios")));
@property (readonly) BOOL isFromCache __attribute__((swift_name("isFromCache")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol CommonKotlinx_serialization_coreEncoder
@required
- (id<CommonKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<CommonKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<CommonKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol CommonKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<CommonKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<CommonKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<CommonKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) CommonKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol CommonKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<CommonKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<CommonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface CommonKoin_coreInstanceFactory<T> : CommonBase
- (instancetype)initWithBeanDefinition:(CommonKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) CommonKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(CommonKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(CommonKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(CommonKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(CommonKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) CommonKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface CommonKoin_coreScopeDSL : CommonBase
- (instancetype)initWithScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier module:(CommonKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (CommonKotlinPair<CommonKoin_coreModule *, CommonKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) CommonKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<CommonKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface CommonKoin_coreSingleInstanceFactory<T> : CommonKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(CommonKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(CommonKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(CommonKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(CommonKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(CommonKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authAndroidPackageName")))
@interface CommonFirebase_authAndroidPackageName : CommonBase
- (instancetype)initWithPackageName:(NSString *)packageName installIfNotAvailable:(BOOL)installIfNotAvailable minimumVersion:(NSString * _Nullable)minimumVersion __attribute__((swift_name("init(packageName:installIfNotAvailable:minimumVersion:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (CommonFirebase_authAndroidPackageName *)doCopyPackageName:(NSString *)packageName installIfNotAvailable:(BOOL)installIfNotAvailable minimumVersion:(NSString * _Nullable)minimumVersion __attribute__((swift_name("doCopy(packageName:installIfNotAvailable:minimumVersion:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL installIfNotAvailable __attribute__((swift_name("installIfNotAvailable")));
@property (readonly) NSString * _Nullable minimumVersion __attribute__((swift_name("minimumVersion")));
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authMultiFactorAssertion")))
@interface CommonFirebase_authMultiFactorAssertion : CommonBase
- (instancetype)initWithIos:(FIRMultiFactorAssertion *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *factorId __attribute__((swift_name("factorId")));
@property (readonly) FIRMultiFactorAssertion *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authMultiFactorSession")))
@interface CommonFirebase_authMultiFactorSession : CommonBase
- (instancetype)initWithIos:(FIRMultiFactorSession *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) FIRMultiFactorSession *ios __attribute__((swift_name("ios")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_authMultiFactorInfo")))
@interface CommonFirebase_authMultiFactorInfo : CommonBase
- (instancetype)initWithIos:(FIRMultiFactorInfo *)ios __attribute__((swift_name("init(ios:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) double enrollmentTime __attribute__((swift_name("enrollmentTime")));
@property (readonly) NSString *factorId __attribute__((swift_name("factorId")));
@property (readonly) FIRMultiFactorInfo *ios __attribute__((swift_name("ios")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@end;

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol CommonKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(CommonKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface CommonKoin_coreParametersHolderCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface CommonKoin_coreLevel : CommonKotlinEnum<CommonKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) CommonKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) CommonKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) CommonKoin_coreLevel *none __attribute__((swift_name("none")));
+ (CommonKotlinArray<CommonKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface CommonKoin_coreScopeRegistryCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Orbit_coreIdlingResource")))
@protocol CommonOrbit_coreIdlingResource
@required
- (void)close __attribute__((swift_name("close()")));
- (void)decrement __attribute__((swift_name("decrement()")));
- (void)increment __attribute__((swift_name("increment()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineExceptionHandler")))
@protocol CommonKotlinx_coroutines_coreCoroutineExceptionHandler <CommonKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<CommonKotlinCoroutineContext>)context exception:(CommonKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Firebase_firestoreChangeType")))
@interface CommonFirebase_firestoreChangeType : CommonKotlinEnum<CommonFirebase_firestoreChangeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonFirebase_firestoreChangeType *added __attribute__((swift_name("added")));
@property (class, readonly) CommonFirebase_firestoreChangeType *modified __attribute__((swift_name("modified")));
@property (class, readonly) CommonFirebase_firestoreChangeType *removed __attribute__((swift_name("removed")));
+ (CommonKotlinArray<CommonFirebase_firestoreChangeType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol CommonKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<CommonKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<CommonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface CommonKotlinx_serialization_coreSerializersModule : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<CommonKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<CommonKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<CommonKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<CommonKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<CommonKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CommonKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<CommonKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<CommonKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol CommonKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface CommonKotlinx_serialization_coreSerialKind : CommonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol CommonKotlinx_serialization_coreDecoder
@required
- (id<CommonKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<CommonKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (CommonKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface CommonKoin_coreBeanDefinition<T> : CommonBase
- (instancetype)initWithScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier primaryType:(id<CommonKotlinKClass>)primaryType qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition kind:(CommonKoin_coreKind *)kind secondaryTypes:(NSArray<id<CommonKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (id<CommonKoin_coreQualifier>)component1 __attribute__((swift_name("component1()")));
- (id<CommonKotlinKClass>)component2 __attribute__((swift_name("component2()")));
- (id<CommonKoin_coreQualifier> _Nullable)component3 __attribute__((swift_name("component3()")));
- (T _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))component4 __attribute__((swift_name("component4()")));
- (CommonKoin_coreKind *)component5 __attribute__((swift_name("component5()")));
- (NSArray<id<CommonKotlinKClass>> *)component6 __attribute__((swift_name("component6()")));
- (CommonKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<CommonKoin_coreQualifier>)scopeQualifier primaryType:(id<CommonKotlinKClass>)primaryType qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *))definition kind:(CommonKoin_coreKind *)kind secondaryTypes:(NSArray<id<CommonKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<CommonKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<CommonKotlinKClass>)clazz qualifier:(id<CommonKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<CommonKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property CommonKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(CommonKoin_coreScope *, CommonKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) CommonKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<CommonKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property (readonly) id<CommonKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<CommonKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<CommonKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface CommonKoin_coreInstanceFactoryCompanion : CommonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) CommonKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface CommonKoin_coreInstanceContext : CommonBase
- (instancetype)initWithKoin:(CommonKoin_coreKoin *)koin scope:(CommonKoin_coreScope *)scope parameters:(CommonKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) CommonKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) CommonKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) CommonKoin_coreScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol CommonKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<CommonKotlinKClass>)kClass provider:(id<CommonKotlinx_serialization_coreKSerializer> (^)(NSArray<id<CommonKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<CommonKotlinKClass>)kClass serializer:(id<CommonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<CommonKotlinKClass>)baseClass actualClass:(id<CommonKotlinKClass>)actualClass actualSerializer:(id<CommonKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<CommonKotlinKClass>)baseClass defaultSerializerProvider:(id<CommonKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol CommonKotlinx_serialization_coreKSerializer <CommonKotlinx_serialization_coreSerializationStrategy, CommonKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol CommonKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<CommonKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<CommonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<CommonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) CommonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface CommonKoin_coreKind : CommonKotlinEnum<CommonKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CommonKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) CommonKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) CommonKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (CommonKotlinArray<CommonKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface CommonKoin_coreCallbacks<T> : CommonBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (void (^ _Nullable)(T _Nullable))component1 __attribute__((swift_name("component1()")));
- (CommonKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
