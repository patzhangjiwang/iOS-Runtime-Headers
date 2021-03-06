/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class <NSTextStorageDelegate>, NSArray, NSMutableArray;

@interface NSTextStorage : NSMutableAttributedString {
    int _changeInLength;
    int _editedDelta;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _editedRange;
    struct { 
        unsigned int editedMask : 8; 
        unsigned int postWillProcess : 1; 
        unsigned int postDidProcess : 1; 
        unsigned int  : 6; 
        unsigned int disabled : 16; 
    } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
}

@property int changeInLength;
@property <NSTextStorageDelegate> * delegate;
@property unsigned int editedMask;
@property struct _NSRange { unsigned int x1; unsigned int x2; } editedRange;
@property(readonly) BOOL fixesAttributesLazily;
@property(readonly) NSArray * layoutManagers;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)_attributeFixingInProgress;
- (BOOL)_forceFixAttributes;
- (BOOL)_isEditing;
- (BOOL)_lockForReading;
- (BOOL)_lockForWriting;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1;
- (void)_notifyEdited:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3 invalidatedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeByEstimatingAttributeFixingForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (void)_setForceFixAttributes:(BOOL)arg1;
- (void)_setUsesSimpleTextEffects:(BOOL)arg1;
- (BOOL)_shouldSetOriginalFontAttribute;
- (id)_undoRedoAttributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_undoRedoTextOperation:(id)arg1;
- (void)_unlock;
- (BOOL)_usesSimpleTextEffects;
- (void)addLayoutManager:(id)arg1;
- (void)beginEditing;
- (int)changeInLength;
- (Class)classForCoder;
- (void)coordinateAccess:(id)arg1;
- (void)coordinateEditing:(id)arg1;
- (void)coordinateReading:(id)arg1;
- (id)cuiCatalog;
- (id)cuiStyleEffects;
- (void)dealloc;
- (id)delegate;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3;
- (unsigned int)editedMask;
- (struct _NSRange { unsigned int x1; unsigned int x2; })editedRange;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditing;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)finalize;
- (BOOL)fixesAttributesLazily;
- (void)fontSetChanged;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidateAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)layoutManagers;
- (void)processEditing;
- (void)removeLayoutManager:(id)arg1;
- (void)setChangeInLength:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditedMask:(unsigned int)arg1;
- (void)setEditedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
