int __fastcall packet_2_nonce_zec_1746(int a1, _BYTE *a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  _BYTE v10[32]; // [sp+24h] [bp-1020h] BYREF
  int v11; // [sp+1024h] [bp-20h]
  _BYTE *v12; // [sp+1028h] [bp-1Ch]
  int v13; // [sp+102Ch] [bp-18h]
  unsigned __int8 v14; // [sp+1031h] [bp-13h]
  unsigned __int8 v15; // [sp+1032h] [bp-12h]
  unsigned __int8 v16; // [sp+1033h] [bp-11h]
  int v17; // [sp+1034h] [bp-10h]
  int v18; // [sp+1038h] [bp-Ch]
  _BYTE *v19; // [sp+103Ch] [bp-8h]

  v19 = a2;
  v18 = a3;
  v17 = 1;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  if ( (a2[2] & 0xF0) != 0xE0 )
    return 10;
  v12 = a2;
  v16 = (unsigned int)(unsigned __int8)a2[3] / *(_DWORD *)(a1 + 468);
  v15 = 0;
  v14 = a2[2] & 0xF;
  v13 = (unsigned __int8)a2[4];
  v11 = *(_DWORD *)(a1 + 864);
  if ( v16 <= 5u )
  {
    memcpy((void *)(v11 + 91 * v14 + 1456 * v15 + 1456 * v16 + 27648 + 1), v19 + 2, 0x5Bu);
    if ( v14 == 15 )
    {
      v17 = sub_1EE01C(v16, v15, v11 + 36385, v11 + 27649);
      if ( v17 )
      {
        return v17;
      }
      else
      {
        *(_QWORD *)v18 = *(_QWORD *)(v11 + 8 * v13);
        *a7 = *(_DWORD *)(v11 + 8 * v13);
        strcpy((char *)(v18 + 16), (const char *)(v11 + 32 * (v13 + 32)));
        *(_DWORD *)(v18 + 48) = *(_DWORD *)(v11 + 1357 * (v16 + v15) + 37736 + 1);
        memcpy((void *)(v18 + 54), (const void *)(v11 + 1357 * (v16 + v15) + 36384 + 1), 0x540u);
        *(_BYTE *)(v18 + 52) = *(_BYTE *)(v11 + 1357 * (v16 + v15) + 37732);
        *(_BYTE *)(v18 + 53) = v13;
        *a6 = v16;
        *(_DWORD *)(v18 + 8) = *a6;
        *a5 = *(_DWORD *)(v18 + 48);
        *a4 = 1;
        return 0;
      }
    }
    else
    {
      return 14;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "%s chip %d is not exist", "packet_2_nonce_zec_1746", v16);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      171,
      "packet_2_nonce_zec_1746",
      23,
      394,
      80,
      v10);
    return 14;
  }
}
