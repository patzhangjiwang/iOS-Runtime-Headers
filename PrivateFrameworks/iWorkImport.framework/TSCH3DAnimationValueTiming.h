/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSCH3DAnimationValueTiming : TSCH3DAnimationTiming {
    struct box<glm::detail::tvec1<float> > { 
        struct tvec1<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
        } mMin; 
        struct tvec1<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
        } mMax; 
    NSString *mName;
    } mValueRange;
}

@property(retain) NSString * name;
@property struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; } valueRange;

+ (id)timingWithName:(id)arg1 valueRange:(const struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; }*)arg2;
+ (id)timingWithName:(id)arg1;

- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (void)evaluate:(float)arg1 context:(id)arg2;
- (id)initWithName:(id)arg1 valueRange:(const struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; }*)arg2;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValueRange:(struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; })arg1;
- (struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; })valueRange;

@end