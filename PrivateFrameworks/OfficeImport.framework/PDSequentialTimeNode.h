/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSequentialTimeNode : PDTimeNode {
    bool  mConcurrent;
    int  mNextAction;
    NSMutableArray * mNextConditions;
    int  mPreviousAction;
    NSMutableArray * mPreviousConditions;
}

@property (nonatomic) bool concurrent;
@property (nonatomic) double delay;
@property (nonatomic) double direction;
@property (nonatomic, retain) NSString *groupId;
@property (nonatomic) int iterateType;
@property (nonatomic) int nextAction;
@property (nonatomic, retain) NSMutableArray *nextConditions;
@property (nonatomic) int presetClass;
@property (nonatomic) int presetId;
@property (nonatomic) int previousAction;
@property (nonatomic, retain) NSMutableArray *previousConditions;
@property (nonatomic, retain) PDAnimationTarget *target;
@property (nonatomic) int triggerType;

+ (unsigned long long)buildPartsFromTarget:(id)arg1;
+ (id)newSequentialTimeNodeGroupForAnimationInfo;
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1;
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg1 target:(id)arg2;
+ (id)timeNodeUnion:(id)arg1 initWithClass:(Class)arg2;

- (bool)concurrent;
- (void)dealloc;
- (double)delay;
- (double)direction;
- (id)groupId;
- (int)iterateType;
- (id)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1;
- (id)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)arg1 level1NodeIndex:(unsigned long long)arg2;
- (id)level3BehaviorAtNodeIndex:(unsigned long long)arg1 level2NodeIndex:(unsigned long long)arg2 level1NodeIndex:(unsigned long long)arg3;
- (int)nextAction;
- (id)nextConditions;
- (int)presetClass;
- (int)presetId;
- (int)previousAction;
- (id)previousConditions;
- (void)setConcurrent:(bool)arg1;
- (void)setDelay:(double)arg1;
- (void)setDirection:(double)arg1;
- (void)setGroupId:(id)arg1;
- (void)setIterateType:(int)arg1;
- (void)setLevel2ParallelAttribute:(id /* block */)arg1;
- (void)setNextAction:(int)arg1;
- (void)setNextConditions:(id)arg1;
- (void)setPresetClass:(int)arg1;
- (void)setPresetId:(int)arg1;
- (void)setPreviousAction:(int)arg1;
- (void)setPreviousConditions:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTriggerType:(int)arg1;
- (id)target;
- (int)triggerType;

@end