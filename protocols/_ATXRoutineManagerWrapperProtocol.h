/* Generated by RuntimeBrowser.
 */

@protocol _ATXRoutineManagerWrapperProtocol <NSObject>

@required

- (void)fetchAllLocationsOfInterestWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchLocationOfInterestAtCurrentLocationWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RTLocationOfInterest *, NSError *, void*
- (void)startLeechingVisitsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLVisit *, NSError *, void*
- (void)stopLeechingVisits;

@end