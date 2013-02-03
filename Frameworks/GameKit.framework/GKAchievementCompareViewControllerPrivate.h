/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAchievementCompareViewSectionDataSource, UIImage, GKGameRecord, GKPlayer, NSArray, GKAchievementCompareHeaderDataSourceSection;

@interface GKAchievementCompareViewControllerPrivate : GKAchievementViewControllerPrivate {
    GKAchievementCompareHeaderDataSourceSection *_achievementCompareFriendHeaderViewSection;
    GKAchievementCompareHeaderDataSourceSection *_achievementCompareMeHeaderViewSection;
    GKAchievementCompareViewSectionDataSource *_achievementCompareViewSection;
    UIImage *_compositeCheckMark;
    GKPlayer *_friend;
    NSArray *_friendAchievements;
    GKGameRecord *_friendRecord;
}

@property(retain) GKAchievementCompareHeaderDataSourceSection * achievementCompareFriendHeaderViewSection;
@property(retain) GKAchievementCompareHeaderDataSourceSection * achievementCompareMeHeaderViewSection;
@property(retain) GKAchievementCompareViewSectionDataSource * achievementCompareViewSection;
@property(retain) UIImage * compositeCheckMark;
@property(retain) NSArray * friendAchievements;
@property(retain) GKGameRecord * friendRecord;

- (void)_gkResetContents;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (id)achievementCompareFriendHeaderViewSection;
- (id)achievementCompareMeHeaderViewSection;
- (id)achievementCompareViewSection;
- (id)compositeCheckMark;
- (void)dealloc;
- (id)friendAchievements;
- (id)friendRecord;
- (id)initWithGameRecord:(id)arg1 friendRecord:(id)arg2;
- (void)playTapped;
- (void)setAchievementCompareFriendHeaderViewSection:(id)arg1;
- (void)setAchievementCompareMeHeaderViewSection:(id)arg1;
- (void)setAchievementCompareViewSection:(id)arg1;
- (void)setCompositeCheckMark:(id)arg1;
- (void)setFriendAchievements:(id)arg1;
- (void)setFriendRecord:(id)arg1;
- (void)setupSectionDataSource:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)title;
- (void)updateStatusWithError:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;

@end