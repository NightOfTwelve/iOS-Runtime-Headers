/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDTransformGradient : TSDGradient <TSDMixing> {
    struct CGSize { 
        float width; 
        float height; 
    } mBaseNaturalSize;
    struct CGPoint { 
        float x; 
        float y; 
    } mEnd;
    struct CGPoint { 
        float x; 
        float y; 
    } mStart;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mTransformBeforeUpgrade;
}

@property struct CGSize { float x1; float x2; } baseNaturalSize;
@property struct CGPoint { float x1; float x2; } endPoint;
@property struct CGPoint { float x1; float x2; } startPoint;

- (struct CGSize { float x1; float x2; })baseNaturalSize;
- (struct CGSize { float x1; float x2; })baseNaturalSizeForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGPoint { float x1; float x2; })endPoint;
- (struct CGPoint { float x1; float x2; })endPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)gradientAngleInDegrees;
- (unsigned int)hash;
- (id)initWithArchive:(const struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithGradient:(id)arg1 inPath:(id)arg2 andBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)initWithGradientStops:(id)arg1 type:(unsigned int)arg2;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned int)arg3;
- (BOOL)isAdvancedGradientIgnoringFlag;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringTransform:(id)arg1;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { float x1; float x2; })normalizedPointForSize:(struct CGSize { float x1; float x2; })arg1 endPoint:(BOOL)arg2;
- (void)p_drawQuartzShadingInContext:(struct CGContext { }*)arg1 withGradientNaturalSize:(struct CGSize { float x1; float x2; })arg2 baseNaturalSize:(struct CGSize { float x1; float x2; })arg3 start:(struct CGPoint { float x1; float x2; })arg4 end:(struct CGPoint { float x1; float x2; })arg5;
- (struct CGPoint { float x1; float x2; })p_scalePoint:(struct CGPoint { float x1; float x2; })arg1 fromShapeWithNaturalSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })p_scalePoint:(struct CGPoint { float x1; float x2; })arg1 toShapeWithNaturalSize:(struct CGSize { float x1; float x2; })arg2;
- (void)p_setDefaultValues;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintPath:(struct CGPath { }*)arg1 naturalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inContext:(struct CGContext { }*)arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 atAngle:(float)arg3;
- (void)saveToArchive:(struct FillArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_3_1_1; } x3; unsigned int x4[1]; int x5; struct Color {} *x6; struct GradientArchive {} *x7; struct ImageFillArchive {} *x8; }*)arg1 archiver:(id)arg2;
- (void)setBaseNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setEndPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStartPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })startPoint;
- (struct CGPoint { float x1; float x2; })startPointForPath:(id)arg1 andBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForSize:(struct CGSize { float x1; float x2; })arg1;

@end