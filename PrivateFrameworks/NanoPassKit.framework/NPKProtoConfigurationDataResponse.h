/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NSData;

@interface NPKProtoConfigurationDataResponse : PBCodable <NSCopying> {
    NSData *_configurationDataBytes;
    struct { 
        unsigned int pending : 1; 
    } _has;
    BOOL _pending;
}

@property(retain) NSData * configurationDataBytes;
@property(readonly) BOOL hasConfigurationDataBytes;
@property BOOL hasPending;
@property BOOL pending;

- (void).cxx_destruct;
- (id)configurationDataBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConfigurationDataBytes;
- (BOOL)hasPending;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)pending;
- (BOOL)readFrom:(id)arg1;
- (void)setConfigurationDataBytes:(id)arg1;
- (void)setHasPending:(BOOL)arg1;
- (void)setPending:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
