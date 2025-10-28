int __fastcall extract_byte_from_hex(const char *a1, int a2)
{
  const __int32_t **v4; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r4
  int v8; // r4
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  int v13; // r3
  _DWORD *v14; // r3
  int v15; // r1
  int v16; // r3
  _DWORD *v17; // r3
  int v18; // r1
  int v19; // r3
  _DWORD *v20; // r3
  int v21; // r1
  char v22[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( (strlen(a1) & 1) != 0 )
  {
    V_LOCK();
    LOWORD(v13) = 4200;
    HIWORD(v13) = (unsigned int)"ad 0 bytes" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v13, a1);
    V_UNLOCK();
    LOWORD(v14) = -14512;
    HIWORD(v14) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v15) = 4048;
    HIWORD(v15) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/stratum_handler.c" >> 16;
    zlog(*v14, v15, 127, "extract_byte_from_hex", 21, 36, 100, v22);
  }
  v4 = _ctype_tolower_loc();
  v5 = LOBYTE((*v4)[(unsigned __int8)a1[a2]]);
  v6 = LOBYTE((*v4)[(unsigned __int8)a1[a2 + 1]]);
  if ( (unsigned int)(v5 - 97) > 5 && (unsigned int)(v5 - 48) > 9 )
  {
    V_LOCK();
    LOWORD(v19) = 4232;
    HIWORD(v19) = (unsigned int)"cv failed err %zd %d" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v19, v5);
    V_UNLOCK();
    LOWORD(v20) = -14512;
    HIWORD(v20) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v21) = 4048;
    HIWORD(v21) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/stratum_handler.c" >> 16;
    zlog(*v20, v21, 127, "extract_byte_from_hex", 21, 43, 100, v22);
  }
  if ( (unsigned int)(v6 - 97) > 5 && (unsigned int)(v6 - 48) > 9 )
  {
    V_LOCK();
    LOWORD(v16) = 4232;
    HIWORD(v16) = (unsigned int)"cv failed err %zd %d" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v16, v6);
    V_UNLOCK();
    LOWORD(v17) = -14512;
    HIWORD(v17) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v18) = 4048;
    HIWORD(v18) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/stratum_handler.c" >> 16;
    zlog(*v17, v18, 127, "extract_byte_from_hex", 21, 46, 100, v22);
  }
  v7 = 16 * sub_31658(v5);
  v8 = v7 + sub_31658(v6);
  if ( v8 > 255 )
  {
    V_LOCK();
    LOWORD(v9) = 4264;
    HIWORD(v9) = (unsigned int)"recv_line recv failed detailed error %d" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v9, a1, a2);
    V_UNLOCK();
    LOWORD(v10) = -14512;
    HIWORD(v10) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v11) = 4048;
    HIWORD(v11) = (unsigned int)"ce/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/stratum_handler.c" >> 16;
    zlog(*v10, v11, 127, "extract_byte_from_hex", 21, 53, 100, v22);
  }
  return (unsigned __int8)v8;
}
