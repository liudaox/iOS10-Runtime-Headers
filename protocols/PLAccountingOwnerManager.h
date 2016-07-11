/* Generated by RuntimeBrowser.
 */

@protocol PLAccountingOwnerManager <NSObject>

@required

- (PLAccountingDependency *)_lastDependencyForDependencyID:(NSNumber *)arg1;
- (void)canFreeOwner:(PLAccountingOwner *)arg1;
- (NSArray *)dependenciesWithDependencyID:(NSNumber *)arg1 withRange:(PLAccountingRange *)arg2;
- (NSMutableSet *)dependencyIDsForOwner:(PLAccountingOwner *)arg1;
- (PLAccountingDependency *)lastDependencyForDependencyID:(NSNumber *)arg1;
- (void)startObservingDependencyID:(NSNumber *)arg1 forOwner:(PLAccountingOwner *)arg2;
- (void)stopObservingDependencyID:(NSNumber *)arg1 forOwner:(PLAccountingOwner *)arg2;

@end