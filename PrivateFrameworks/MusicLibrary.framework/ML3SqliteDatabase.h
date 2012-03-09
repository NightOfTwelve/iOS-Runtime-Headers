/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3SqliteDatabaseContext, NSString;

@interface ML3SqliteDatabase : NSObject  {
    ML3SqliteDatabaseContext *_mainDatabaseContext;
    ML3SqliteDatabaseContext *_backgroundDatabaseContext;
    struct dispatch_queue_s { } *_backgroundQueue;
    NSString *_path;
    BOOL _enableWrites;
}

@property(readonly) NSString * path;

+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (BOOL)migrateToCurrentUserVersionUsingHandle:(struct sqlite3 { }*)arg1;
+ (BOOL)migrateFromVersion:(int)arg1 outUserVersion:(int*)arg2 usingHandle:(struct sqlite3 { }*)arg3;
+ (int)userVersionUsingHandle:(struct sqlite3 { }*)arg1;
+ (BOOL)buildDatabaseTablesUsingHandle:(struct sqlite3 { }*)arg1 usingTransaction:(BOOL)arg2;
+ (int)userVersionCurrent;
+ (id)allSchemaSQL;
+ (void)stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3;
+ (void)registerCustomCallbacksOnHandle:(struct sqlite3 { }*)arg1;
+ (void)limitCacheSize:(struct sqlite3 { }*)arg1;
+ (BOOL)attachAuxiliaryDatabases:(struct sqlite3 { }*)arg1;
+ (void)registerFunctionsOnHandle:(struct sqlite3 { }*)arg1;
+ (id)databasePath;
+ (id)systemCurrentLanguage;
+ (BOOL)orderingLanguageMatchesSystemUsingHandle:(struct sqlite3 { }*)arg1;
+ (BOOL)userVersionMatchesSystemUsingHandle:(struct sqlite3 { }*)arg1;
+ (BOOL)executeSQL:(id)arg1 usingHandle:(struct sqlite3 { }*)arg2;
+ (void)closeDatabaseHandle:(struct sqlite3 { }*)arg1;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;

- (void)dealloc;
- (id)initWithPath:(id)arg1 enableWrites:(BOOL)arg2;
- (void)prepareStatementForSQL:(id)arg1 usingBlock:(id)arg2;
- (void)performTransactionWithBlock:(id)arg1;
- (id)path;
- (BOOL)coerceValidDatabase;
- (BOOL)buildDatabaseTables;
- (void)performOperationInBackground:(id)arg1;
- (BOOL)canWriteToDatabase;
- (BOOL)deleteAndRecreateDatabaseUsingHandle:(struct sqlite3 {}**)arg1;
- (void)didRollbackInDatabaseContext:(id)arg1;
- (void)didCommitInDatabaseContext:(id)arg1;
- (id)newDatabaseContext;
- (void)accessDatabaseContextUsingBlock:(id)arg1;
- (BOOL)openDatabaseHandle:(struct sqlite3 {}**)arg1;
- (BOOL)_openDatabaseWithOpenHandler:(id)arg1;
- (void)_debugLoggingOptionsDidChangeNotification:(id)arg1;
- (id)backgroundQueue_backgroundDatabaseContext;
- (void)reconnectBackgroundDatabaseContext;
- (void)reconnectMainDatabaseContext;
- (struct sqlite3 { }*)openedDatabaseHandle;
- (void)reconnectToDatabase;
- (BOOL)executeSQL:(id)arg1;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (BOOL)requiresPostProcessing;

@end