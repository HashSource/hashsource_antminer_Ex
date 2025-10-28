int __fastcall get_chip_dag_packet_num_rvn(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r0
  int v4; // r8
  char *v5; // r0
  int v6; // r9
  int v7; // r0
  int v9; // r0
  int v10; // r0
  void *v11; // [sp+40h] [bp-1084h]
  void *ptr; // [sp+44h] [bp-1080h]
  int v13; // [sp+48h] [bp-107Ch]
  int v14; // [sp+5Ch] [bp-1068h]
  int v15; // [sp+60h] [bp-1064h] BYREF
  _BYTE v16[32]; // [sp+80h] [bp-1044h] BYREF
  int v17; // [sp+A0h] [bp-1024h] BYREF
  _BYTE v18[4100]; // [sp+C0h] [bp-1004h] BYREF

  ptr = malloc(0x60u);
  v11 = malloc(0x60u);
  v2 = sub_93298(a1, 115, ptr);
  if ( v2 == 8 )
  {
    v14 = 0;
  }
  else
  {
    V_LOCK(v2);
    V_INT((int)&v15, "chain");
    v14 = 12;
    v9 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      174,
      "get_chip_dag_packet_num_rvn",
      27,
      1855,
      100,
      v18);
  }
  v3 = sub_93298(a1, 116, v11);
  v13 = v3;
  if ( v3 == 8
    || (V_LOCK(v3),
        V_INT((int)v16, "chain"),
        v10 = logfmt_raw((int)v18, 0x1000u),
        V_UNLOCK(v10),
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
          174,
          "get_chip_dag_packet_num_rvn",
          27,
          1862,
          100,
          v18),
        v14 = 12,
        v13 > 0) )
  {
    v4 = 0;
    v5 = "no";
    v6 = 0;
    do
    {
      ++v6;
      V_LOCK(v5);
      V_INT((int)&v17, "chain");
      v4 += 12;
      v7 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v7);
      v5 = (char *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bui"
                     "ld/godminer-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
                     174,
                     "get_chip_dag_packet_num_rvn",
                     27,
                     1871,
                     60,
                     v18);
    }
    while ( v13 > v6 );
  }
  free(ptr);
  free(v11);
  return v14;
}
