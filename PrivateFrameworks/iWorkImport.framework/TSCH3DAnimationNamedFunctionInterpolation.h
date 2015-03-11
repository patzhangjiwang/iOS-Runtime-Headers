/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSCH3DAnimationNamedFunctionInterpolation : TSCH3DAnimationInterpolation {
    int (*mFunction)();
    NSString *mName;
    NSString *mShaderFunction;
}

@property(readonly) NSString * shaderFunction;

+ (id)functionWithName:(id)arg1 function:(int (*)())arg2 shaderFunction:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 function:(int (*)())arg2 shaderFunction:(id)arg3;
- (float)interpolate:(float)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (id)name;
- (struct box<glm::detail::tvec1<float> > { struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; } x1; struct tvec1<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; } x2; })rangeForIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;
- (id)shaderFunction;

@end