/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying> {
    int _actionType;
    int _alertType;
    double _currentTimestamp;
    double _eventTimestamp;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int currentTimestamp : 1; 
        unsigned int eventTimestamp : 1; 
        unsigned int travelDuration : 1; 
        unsigned int actionType : 1; 
        unsigned int alertType : 1; 
        unsigned int travelState : 1; 
    } _has;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    double _travelDuration;
    int _travelState;
}

@property int actionType;
@property int alertType;
@property double currentTimestamp;
@property double eventTimestamp;
@property BOOL hasActionType;
@property BOOL hasAlertType;
@property BOOL hasCurrentTimestamp;
@property BOOL hasEventTimestamp;
@property BOOL hasSessionID;
@property BOOL hasTravelDuration;
@property BOOL hasTravelState;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property double travelDuration;
@property int travelState;

- (int)actionType;
- (int)alertType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)currentTimestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eventTimestamp;
- (BOOL)hasActionType;
- (BOOL)hasAlertType;
- (BOOL)hasCurrentTimestamp;
- (BOOL)hasEventTimestamp;
- (BOOL)hasSessionID;
- (BOOL)hasTravelDuration;
- (BOOL)hasTravelState;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setActionType:(int)arg1;
- (void)setAlertType:(int)arg1;
- (void)setCurrentTimestamp:(double)arg1;
- (void)setEventTimestamp:(double)arg1;
- (void)setHasActionType:(BOOL)arg1;
- (void)setHasAlertType:(BOOL)arg1;
- (void)setHasCurrentTimestamp:(BOOL)arg1;
- (void)setHasEventTimestamp:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasTravelDuration:(BOOL)arg1;
- (void)setHasTravelState:(BOOL)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTravelDuration:(double)arg1;
- (void)setTravelState:(int)arg1;
- (double)travelDuration;
- (int)travelState;
- (void)writeTo:(id)arg1;

@end
