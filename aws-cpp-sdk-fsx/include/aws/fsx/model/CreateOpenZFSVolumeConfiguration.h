﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OpenZFSDataCompressionType.h>
#include <aws/fsx/model/CreateOpenZFSOriginSnapshotConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/OpenZFSNfsExport.h>
#include <aws/fsx/model/OpenZFSUserOrGroupQuota.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>Specifies the configuration of the OpenZFS volume that you are
   * creating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateOpenZFSVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API CreateOpenZFSVolumeConfiguration
  {
  public:
    CreateOpenZFSVolumeConfiguration();
    CreateOpenZFSVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CreateOpenZFSVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the volume to use as the parent volume. </p>
     */
    inline const Aws::String& GetParentVolumeId() const{ return m_parentVolumeId; }

    /**
     * <p>The ID of the volume to use as the parent volume. </p>
     */
    inline bool ParentVolumeIdHasBeenSet() const { return m_parentVolumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume to use as the parent volume. </p>
     */
    inline void SetParentVolumeId(const Aws::String& value) { m_parentVolumeIdHasBeenSet = true; m_parentVolumeId = value; }

    /**
     * <p>The ID of the volume to use as the parent volume. </p>
     */
    inline void SetParentVolumeId(Aws::String&& value) { m_parentVolumeIdHasBeenSet = true; m_parentVolumeId = std::move(value); }

    /**
     * <p>The ID of the volume to use as the parent volume. </p>
     */
    inline void SetParentVolumeId(const char* value) { m_parentVolumeIdHasBeenSet = true; m_parentVolumeId.assign(value); }

    /**
     * <p>The ID of the volume to use as the parent volume. </p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithParentVolumeId(const Aws::String& value) { SetParentVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume to use as the parent volume. </p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithParentVolumeId(Aws::String&& value) { SetParentVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume to use as the parent volume. </p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithParentVolumeId(const char* value) { SetParentVolumeId(value); return *this;}


    /**
     * <p>The amount of storage in gibibytes (GiB) to reserve from the parent volume.
     * You can't reserve more storage than the parent volume has reserved.</p>
     */
    inline int GetStorageCapacityReservationGiB() const{ return m_storageCapacityReservationGiB; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to reserve from the parent volume.
     * You can't reserve more storage than the parent volume has reserved.</p>
     */
    inline bool StorageCapacityReservationGiBHasBeenSet() const { return m_storageCapacityReservationGiBHasBeenSet; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to reserve from the parent volume.
     * You can't reserve more storage than the parent volume has reserved.</p>
     */
    inline void SetStorageCapacityReservationGiB(int value) { m_storageCapacityReservationGiBHasBeenSet = true; m_storageCapacityReservationGiB = value; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to reserve from the parent volume.
     * You can't reserve more storage than the parent volume has reserved.</p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithStorageCapacityReservationGiB(int value) { SetStorageCapacityReservationGiB(value); return *this;}


    /**
     * <p>The maximum amount of storage in gibibytes (GiB) that the volume can use from
     * its parent. You can specify a quota larger than the storage on the parent
     * volume.</p>
     */
    inline int GetStorageCapacityQuotaGiB() const{ return m_storageCapacityQuotaGiB; }

    /**
     * <p>The maximum amount of storage in gibibytes (GiB) that the volume can use from
     * its parent. You can specify a quota larger than the storage on the parent
     * volume.</p>
     */
    inline bool StorageCapacityQuotaGiBHasBeenSet() const { return m_storageCapacityQuotaGiBHasBeenSet; }

    /**
     * <p>The maximum amount of storage in gibibytes (GiB) that the volume can use from
     * its parent. You can specify a quota larger than the storage on the parent
     * volume.</p>
     */
    inline void SetStorageCapacityQuotaGiB(int value) { m_storageCapacityQuotaGiBHasBeenSet = true; m_storageCapacityQuotaGiB = value; }

    /**
     * <p>The maximum amount of storage in gibibytes (GiB) that the volume can use from
     * its parent. You can specify a quota larger than the storage on the parent
     * volume.</p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithStorageCapacityQuotaGiB(int value) { SetStorageCapacityQuotaGiB(value); return *this;}


    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the Zstandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline const OpenZFSDataCompressionType& GetDataCompressionType() const{ return m_dataCompressionType; }

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the Zstandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the Zstandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline void SetDataCompressionType(const OpenZFSDataCompressionType& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the Zstandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline void SetDataCompressionType(OpenZFSDataCompressionType&& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = std::move(value); }

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the Zstandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline CreateOpenZFSVolumeConfiguration& WithDataCompressionType(const OpenZFSDataCompressionType& value) { SetDataCompressionType(value); return *this;}

    /**
     * <p>Specifies the method used to compress the data on the volume. Unless the
     * compression type is specified, volumes inherit the
     * <code>DataCompressionType</code> value of their parent volume.</p> <ul> <li> <p>
     * <code>NONE</code> - Doesn't compress the data on the volume.</p> </li> <li> <p>
     * <code>ZSTD</code> - Compresses the data in the volume using the Zstandard (ZSTD)
     * compression algorithm. This algorithm reduces the amount of space used on your
     * volume and has very little impact on compute resources.</p> </li> </ul>
     */
    inline CreateOpenZFSVolumeConfiguration& WithDataCompressionType(OpenZFSDataCompressionType&& value) { SetDataCompressionType(std::move(value)); return *this;}


    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code>, and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline bool GetCopyTagsToSnapshots() const{ return m_copyTagsToSnapshots; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code>, and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline bool CopyTagsToSnapshotsHasBeenSet() const { return m_copyTagsToSnapshotsHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code>, and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline void SetCopyTagsToSnapshots(bool value) { m_copyTagsToSnapshotsHasBeenSet = true; m_copyTagsToSnapshots = value; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code>, and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithCopyTagsToSnapshots(bool value) { SetCopyTagsToSnapshots(value); return *this;}


    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline const CreateOpenZFSOriginSnapshotConfiguration& GetOriginSnapshot() const{ return m_originSnapshot; }

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline bool OriginSnapshotHasBeenSet() const { return m_originSnapshotHasBeenSet; }

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline void SetOriginSnapshot(const CreateOpenZFSOriginSnapshotConfiguration& value) { m_originSnapshotHasBeenSet = true; m_originSnapshot = value; }

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline void SetOriginSnapshot(CreateOpenZFSOriginSnapshotConfiguration&& value) { m_originSnapshotHasBeenSet = true; m_originSnapshot = std::move(value); }

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithOriginSnapshot(const CreateOpenZFSOriginSnapshotConfiguration& value) { SetOriginSnapshot(value); return *this;}

    /**
     * <p>The configuration object that specifies the snapshot to use as the origin of
     * the data for the volume.</p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithOriginSnapshot(CreateOpenZFSOriginSnapshotConfiguration&& value) { SetOriginSnapshot(std::move(value)); return *this;}


    /**
     * <p>A Boolean value indicating whether the volume is read-only. </p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>A Boolean value indicating whether the volume is read-only. </p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether the volume is read-only. </p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>A Boolean value indicating whether the volume is read-only. </p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system. </p>
     */
    inline const Aws::Vector<OpenZFSNfsExport>& GetNfsExports() const{ return m_nfsExports; }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system. </p>
     */
    inline bool NfsExportsHasBeenSet() const { return m_nfsExportsHasBeenSet; }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system. </p>
     */
    inline void SetNfsExports(const Aws::Vector<OpenZFSNfsExport>& value) { m_nfsExportsHasBeenSet = true; m_nfsExports = value; }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system. </p>
     */
    inline void SetNfsExports(Aws::Vector<OpenZFSNfsExport>&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports = std::move(value); }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system. </p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithNfsExports(const Aws::Vector<OpenZFSNfsExport>& value) { SetNfsExports(value); return *this;}

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system. </p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithNfsExports(Aws::Vector<OpenZFSNfsExport>&& value) { SetNfsExports(std::move(value)); return *this;}

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system. </p>
     */
    inline CreateOpenZFSVolumeConfiguration& AddNfsExports(const OpenZFSNfsExport& value) { m_nfsExportsHasBeenSet = true; m_nfsExports.push_back(value); return *this; }

    /**
     * <p>The configuration object for mounting a Network File System (NFS) file
     * system. </p>
     */
    inline CreateOpenZFSVolumeConfiguration& AddNfsExports(OpenZFSNfsExport&& value) { m_nfsExportsHasBeenSet = true; m_nfsExports.push_back(std::move(value)); return *this; }


    /**
     * <p>An object specifying how much storage users or groups can use on the volume.
     * </p>
     */
    inline const Aws::Vector<OpenZFSUserOrGroupQuota>& GetUserAndGroupQuotas() const{ return m_userAndGroupQuotas; }

    /**
     * <p>An object specifying how much storage users or groups can use on the volume.
     * </p>
     */
    inline bool UserAndGroupQuotasHasBeenSet() const { return m_userAndGroupQuotasHasBeenSet; }

    /**
     * <p>An object specifying how much storage users or groups can use on the volume.
     * </p>
     */
    inline void SetUserAndGroupQuotas(const Aws::Vector<OpenZFSUserOrGroupQuota>& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas = value; }

    /**
     * <p>An object specifying how much storage users or groups can use on the volume.
     * </p>
     */
    inline void SetUserAndGroupQuotas(Aws::Vector<OpenZFSUserOrGroupQuota>&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas = std::move(value); }

    /**
     * <p>An object specifying how much storage users or groups can use on the volume.
     * </p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithUserAndGroupQuotas(const Aws::Vector<OpenZFSUserOrGroupQuota>& value) { SetUserAndGroupQuotas(value); return *this;}

    /**
     * <p>An object specifying how much storage users or groups can use on the volume.
     * </p>
     */
    inline CreateOpenZFSVolumeConfiguration& WithUserAndGroupQuotas(Aws::Vector<OpenZFSUserOrGroupQuota>&& value) { SetUserAndGroupQuotas(std::move(value)); return *this;}

    /**
     * <p>An object specifying how much storage users or groups can use on the volume.
     * </p>
     */
    inline CreateOpenZFSVolumeConfiguration& AddUserAndGroupQuotas(const OpenZFSUserOrGroupQuota& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas.push_back(value); return *this; }

    /**
     * <p>An object specifying how much storage users or groups can use on the volume.
     * </p>
     */
    inline CreateOpenZFSVolumeConfiguration& AddUserAndGroupQuotas(OpenZFSUserOrGroupQuota&& value) { m_userAndGroupQuotasHasBeenSet = true; m_userAndGroupQuotas.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_parentVolumeId;
    bool m_parentVolumeIdHasBeenSet;

    int m_storageCapacityReservationGiB;
    bool m_storageCapacityReservationGiBHasBeenSet;

    int m_storageCapacityQuotaGiB;
    bool m_storageCapacityQuotaGiBHasBeenSet;

    OpenZFSDataCompressionType m_dataCompressionType;
    bool m_dataCompressionTypeHasBeenSet;

    bool m_copyTagsToSnapshots;
    bool m_copyTagsToSnapshotsHasBeenSet;

    CreateOpenZFSOriginSnapshotConfiguration m_originSnapshot;
    bool m_originSnapshotHasBeenSet;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet;

    Aws::Vector<OpenZFSNfsExport> m_nfsExports;
    bool m_nfsExportsHasBeenSet;

    Aws::Vector<OpenZFSUserOrGroupQuota> m_userAndGroupQuotas;
    bool m_userAndGroupQuotasHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
