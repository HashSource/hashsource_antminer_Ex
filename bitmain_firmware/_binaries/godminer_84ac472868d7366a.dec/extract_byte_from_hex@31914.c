int __fastcall extract_byte_from_hex(const char *a1, int a2)
{
  size_t v4; // r0
  const __int32_t **v5; // r0
  int v6; // r4
  int v7; // r5
  int v8; // r4
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _BYTE v16[4096]; // [sp+10h] [bp-1000h] BYREF

  v4 = strlen(a1);
  if ( (v4 & 1) != 0 )
  {
    V_LOCK(v4);
    v13 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c",
      127,
      "extract_byte_from_hex",
      21,
      36,
      100,
      v16);
  }
  v5 = _ctype_tolower_loc();
  v6 = LOBYTE((*v5)[(unsigned __int8)a1[a2]]);
  v7 = LOBYTE((*v5)[(unsigned __int8)a1[a2 + 1]]);
  if ( (unsigned int)(v6 - 97) > 5 && (unsigned int)(v6 - 48) > 9 )
  {
    V_LOCK(v5);
    v15 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v15);
    v5 = (const __int32_t **)zlog(
                               g_zc,
                               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/relea"
                               "se/build/godminer-origin_master/util.c",
                               127,
                               "extract_byte_from_hex",
                               21,
                               43,
                               100,
                               v16);
  }
  if ( (unsigned int)(v7 - 97) > 5 && (unsigned int)(v7 - 48) > 9 )
  {
    V_LOCK(v5);
    v14 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c",
      127,
      "extract_byte_from_hex",
      21,
      46,
      100,
      v16);
  }
  v8 = 16 * sub_317A0(v6);
  v9 = sub_317A0(v7);
  v10 = v8 + v9;
  if ( v10 > 255 )
  {
    V_LOCK(v9);
    v11 = logfmt_raw((int)v16, 0x1000u);
    V_UNLOCK(v11);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/util.c",
      127,
      "extract_byte_from_hex",
      21,
      53,
      100,
      v16);
  }
  return (unsigned __int8)v10;
}
