#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWrite(void *, const char *, const void *, int32);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileRead(void *, const char *, void *, int32);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileForget(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileDelete(void *, const char *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileShare(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetSyncPlatforms(void *, const char *, ERemoteStoragePlatform);
extern UGCFileWriteStreamHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamOpen(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamWriteChunk(void *, UGCFileWriteStreamHandle_t, const void *, int32);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamClose(void *, UGCFileWriteStreamHandle_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileWriteStreamCancel(void *, UGCFileWriteStreamHandle_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FileExists(void *, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_FilePersisted(void *, const char *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileSize(void *, const char *);
extern int64 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileTimestamp(void *, const char *);
extern ERemoteStoragePlatform cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetSyncPlatforms(void *, const char *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileCount(void *);
extern const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetFileNameAndSize(void *, int, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetQuota(void *, int32 *, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForAccount(void *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_IsCloudEnabledForApp(void *);
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetCloudEnabledForApp(void *, bool);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownload(void *, UGCHandle_t, uint32);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDownloadProgress(void *, UGCHandle_t, int32 *, int32 *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUGCDetails(void *, UGCHandle_t, AppId_t *, char **, int32 *, CSteamID *);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCRead(void *, UGCHandle_t, void *, int32, uint32);
extern int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCCount(void *);
extern UGCHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetCachedUGCHandle(void *, int32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishWorkshopFile(void *, const char *, const char *, AppId_t, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *, EWorkshopFileType);
extern PublishedFileUpdateHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CreatePublishedFileUpdateRequest(void *, PublishedFileId_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileFile(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFilePreviewFile(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTitle(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileDescription(void *, PublishedFileUpdateHandle_t, const char *);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileVisibility(void *, PublishedFileUpdateHandle_t, ERemoteStoragePublishedFileVisibility);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileTags(void *, PublishedFileUpdateHandle_t, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_CommitPublishedFileUpdate(void *, PublishedFileUpdateHandle_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedFileDetails(void *, PublishedFileId_t, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_DeletePublishedFile(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserPublishedFiles(void *, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SubscribePublishedFile(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSubscribedFiles(void *, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UnsubscribePublishedFile(void *, PublishedFileId_t);
extern bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdatePublishedFileSetChangeDescription(void *, PublishedFileUpdateHandle_t, const char *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetPublishedItemVoteDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UpdateUserPublishedItemVote(void *, PublishedFileId_t, bool);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_GetUserPublishedItemVoteDetails(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumerateUserSharedWorkshopFiles(void *, CSteamID, uint32, SteamParamStringArray_t *, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_PublishVideo(void *, EWorkshopVideoProvider, const char *, const char *, const char *, AppId_t, const char *, const char *, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_SetUserPublishedFileAction(void *, PublishedFileId_t, EWorkshopFileAction);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedFilesByUserAction(void *, EWorkshopFileAction, uint32);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_EnumeratePublishedWorkshopFiles(void *, EWorkshopEnumerationType, uint32, uint32, uint32, SteamParamStringArray_t *, SteamParamStringArray_t *);
extern SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION011_UGCDownloadToLocation(void *, UGCHandle_t, const char *, uint32);
#ifdef __cplusplus
}
#endif
