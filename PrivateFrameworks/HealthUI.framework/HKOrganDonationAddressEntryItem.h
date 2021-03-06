/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOrganDonationAddressEntryItem : NSObject <HKSimpleDataEntryCellDelegate, HKSimpleDataEntryItemType, UIPickerViewDataSource, UIPickerViewDelegate> {
    NSString * _address1;
    NSString * _address2;
    HKOrganDonationAddressCell * _cell;
    NSString * _city;
    <HKSimpleDataEntryItemDelegate> * _delegate;
    unsigned int  _placeholderType;
    NSArray * _sortedStateKeys;
    NSString * _state;
    UIPickerView * _statePicker;
    NSDictionary * _statesDict;
    NSString * _zipcode;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSimpleDataEntryItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int placeholderType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginEditing;
- (id)cell;
- (id)delegate;
- (id)formattedKeyAndValue;
- (id)initWithRegistrant:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (unsigned int)placeholderType;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderType:(unsigned int)arg1;
- (void)textFieldDidBeginEditing:(id)arg1 forCell:(id)arg2;
- (void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 forCell:(id)arg2;
- (void)updateCellDisplay;

@end
