/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject {
    WBSHistoryItem *_historyItem;
    float _score;
}

@property(readonly) WBSHistoryItem * historyItem;
@property(readonly) float score;

- (void).cxx_destruct;
- (id)historyItem;
- (id)initWithHistoryItem:(id)arg1 score:(float)arg2;
- (float)score;

@end
