//     File: EntryPoints.h
// Abstract: Callback function definitions for a sample scanner device module.
//  Version: 1.0
// 
// Disclaimer: IMPORTANT:  This Apple software is supplied to you by Apple
// Inc. ("Apple") in consideration of your agreement to the following
// terms, and your use, installation, modification or redistribution of
// this Apple software constitutes acceptance of these terms.  If you do
// not agree with these terms, please do not use, install, modify or
// redistribute this Apple software.
// 
// In consideration of your agreement to abide by the following terms, and
// subject to these terms, Apple grants you a personal, non-exclusive
// license, under Apple's copyrights in this original Apple software (the
// "Apple Software"), to use, reproduce, modify and redistribute the Apple
// Software, with or without modifications, in source and/or binary forms;
// provided that if you redistribute the Apple Software in its entirety and
// without modifications, you must retain this notice and the following
// text and disclaimers in all such redistributions of the Apple Software.
// Neither the name, trademarks, service marks or logos of Apple Inc. may
// be used to endorse or promote products derived from the Apple Software
// without specific prior written permission from Apple.  Except as
// expressly stated in this notice, no other rights or licenses, express or
// implied, are granted by Apple herein, including but not limited to any
// patent rights that may be infringed by your derivative works or by other
// works in which the Apple Software may be incorporated.
// 
// The Apple Software is provided by Apple on an "AS IS" basis.  APPLE
// MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION
// THE IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND
// OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS.
// 
// IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL
// OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION,
// MODIFICATION AND/OR DISTRIBUTION OF THE APPLE SOFTWARE, HOWEVER CAUSED
// AND WHETHER UNDER THEORY OF CONTRACT, TORT (INCLUDING NEGLIGENCE),
// STRICT LIABILITY OR OTHERWISE, EVEN IF APPLE HAS BEEN ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
// 
// Copyright (C) 2012 Apple Inc. All Rights Reserved.
// 

#pragma once

//------------------------------------------------------------------------------------------------------------------------------

ICAError  _ICD_ScannerOpenUSBDevice( UInt32 locationID, ScannerObjectInfo* newDeviceObjectInfo );
ICAError  _ICD_ScannerOpenFWDevice( UInt64 guid, io_string_t ioRegPath, ScannerObjectInfo* newDeviceObjectInfo );
ICAError  _ICD_ScannerOpenTCPIPDevice( CFDictionaryRef params, ScannerObjectInfo* newDeviceObjectInfo );

ICAError  _ICD_ScannerCloseDevice( ScannerObjectInfo* deviceObjectInfo );
ICAError  _ICD_ScannerCleanup( ScannerObjectInfo* objectInfo );

ICAError  _ICD_ScannerPeriodicTask( ScannerObjectInfo* deviceObjectInfo );

ICAError  _ICD_ScannerGetObjectInfo( const ScannerObjectInfo* parentInfo, UInt32 index, ScannerObjectInfo* newInfo );
ICAError  _ICD_ScannerReadFileData( const ScannerObjectInfo* objectInfo, UInt32 dataType, Ptr buffer, UInt32 offset, UInt32* length );
ICAError  _ICD_ScannerSendMessage( const ScannerObjectInfo* objectInfo, ICD_ScannerObjectSendMessagePB* pb, ICDCompletion completion );
ICAError  _ICD_ScannerAddPropertiesToCFDictionary( ScannerObjectInfo* objectInfo, CFMutableDictionaryRef dict );

ICAError  _ICD_ScannerOpenSession( const ScannerObjectInfo* deviceObjectInfo, ICD_ScannerOpenSessionPB* pb );
ICAError  _ICD_ScannerCloseSession( const ScannerObjectInfo* deviceObjectInfo, ICD_ScannerCloseSessionPB* pb );

ICAError  _ICD_ScannerGetParameters( const ScannerObjectInfo* deviceObjectInfo, ICD_ScannerGetParametersPB* pb );
ICAError  _ICD_ScannerSetParameters( const ScannerObjectInfo* deviceObjectInfo, ICD_ScannerSetParametersPB* pb );

ICAError  _ICD_ScannerStatus( const ScannerObjectInfo* deviceObjectInfo, ICD_ScannerStatusPB* pb );
ICAError  _ICD_ScannerStart( const ScannerObjectInfo* deviceObjectInfo, ICD_ScannerStartPB* pb );

//------------------------------------------------------------------------------------------------------------------------------
