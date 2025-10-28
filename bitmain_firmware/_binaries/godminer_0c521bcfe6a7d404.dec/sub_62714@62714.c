bool __fastcall sub_62714(int a1, int a2, char **a3)
{
  char v3; // r3
  _DWORD *v5; // r8
  int v6; // r0
  int v7; // r6
  _DWORD *v8; // r5
  int v9; // r3
  int v10; // r10
  int v11; // r0
  void *v12; // r0
  char *v13; // r8
  int v14; // r5
  int v15; // r0
  int v16; // r6
  _WORD *v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v23; // [sp+4h] [bp-10E8h]
  int v24; // [sp+10h] [bp-10DCh]
  int v25; // [sp+14h] [bp-10D8h]
  int v26; // [sp+18h] [bp-10D4h]
  int v27; // [sp+1Ch] [bp-10D0h]
  const char *v28; // [sp+20h] [bp-10CCh]
  int v29; // [sp+24h] [bp-10C8h]
  int v30; // [sp+28h] [bp-10C4h]
  int v31; // [sp+2Ch] [bp-10C0h]
  char *s; // [sp+40h] [bp-10ACh]
  char *v34; // [sp+44h] [bp-10A8h]
  _WORD *ptr; // [sp+4Ch] [bp-10A0h]
  int v36; // [sp+54h] [bp-1098h] BYREF
  int v37; // [sp+58h] [bp-1094h] BYREF
  int v38; // [sp+5Ch] [bp-1090h]
  int v39; // [sp+60h] [bp-108Ch]
  int v40; // [sp+64h] [bp-1088h]
  char v41[16]; // [sp+68h] [bp-1084h] BYREF
  int v42; // [sp+78h] [bp-1074h]
  int v43; // [sp+7Ch] [bp-1070h]
  int v44; // [sp+80h] [bp-106Ch]
  int v45; // [sp+84h] [bp-1068h]
  int v46; // [sp+88h] [bp-1064h] BYREF
  char v47[32]; // [sp+A8h] [bp-1044h] BYREF
  int v48; // [sp+C8h] [bp-1024h] BYREF
  _BYTE v49[4100]; // [sp+E8h] [bp-1004h] BYREF

  v3 = 0;
  v36 = 0;
  if ( a2 != -1 && *(_DWORD *)(a1 + 304) >= a2 )
    v3 = *(_BYTE *)(*(_DWORD *)(a1 + 456) + a2);
  v39 = 3932160;
  v38 = 0;
  v37 = 0;
  v40 = 0;
  BYTE1(v39) = v3;
  v5 = calloc(0xCu, 1u);
  v6 = (*(int (__fastcall **)(int, int *, int, _DWORD *, int *))(a1 + 260))(a1, &v37, 1, v5, &v36);
  if ( v36 <= 0 )
  {
    v34 = 0;
  }
  else
  {
    v34 = 0;
    v7 = 0;
    v8 = v5;
    do
    {
      while ( 1 )
      {
        ++v7;
        if ( *((_WORD *)v8 + 3) == 60 )
          break;
        v8 += 3;
        if ( v36 <= v7 )
          goto LABEL_9;
      }
      v9 = *v5;
      v8 += 3;
      HIBYTE(v48) = *v5;
      BYTE2(v48) = BYTE1(v9);
      BYTE1(v48) = BYTE2(v9);
      LOBYTE(v48) = HIBYTE(v9);
      v10 = v48;
      V_LOCK(v6);
      v34 += v10;
      V_INT((int)v41, "chain");
      v31 = v10;
      v30 = *((unsigned __int16 *)v8 - 3);
      v29 = *((unsigned __int8 *)v8 - 8);
      v28 = "[Top Nonce Cnt] asic %02x, reg %02x cnt %08x";
      v24 = v42;
      v25 = v43;
      v26 = v44;
      v27 = v45;
      v11 = logfmt_raw((int)v49, 0x1000u);
      V_UNLOCK(v11);
      v6 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/chip_setting.c",
             153,
             "ChipSetting_nonce_counter_CKB_2042",
             34,
             386,
             20,
             v49);
    }
    while ( v36 > v7 );
  }
LABEL_9:
  v12 = v5;
  v13 = 0;
  free(v12);
  *a3 = v34;
  v14 = *(_DWORD *)(a1 + 308);
  v39 = 655360;
  v40 = 255;
  v37 = 1;
  v38 = 0;
  ptr = calloc(12 * v14, 1u);
  v15 = (*(int (__fastcall **)(int, int *, int, _WORD *, int *, int, int, _DWORD, int, int, int, int, const char *, int, int, int))(a1 + 268))(
          a1,
          &v37,
          v14,
          ptr,
          &v36,
          v23,
          2000,
          0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
  if ( v36 > 0 )
  {
    v16 = 0;
    v17 = ptr;
    s = 0;
    do
    {
      if ( v17[3] == 10 )
      {
        s += *(_DWORD *)v17;
        V_LOCK(v15);
        V_INT((int)&v46, "chain");
        v19 = logfmt_raw((int)v49, 0x1000u);
        V_UNLOCK(v19);
        v15 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/chip_setting.c",
                153,
                "ChipSetting_nonce_counter_CKB_2042",
                34,
                409,
                20,
                v49);
      }
      else
      {
        V_LOCK(v15);
        V_INT((int)v47, "chain");
        v18 = logfmt_raw((int)v49, 0x1000u);
        V_UNLOCK(v18);
        v15 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/chip_setting.c",
                153,
                "ChipSetting_nonce_counter_CKB_2042",
                34,
                412,
                100,
                v49);
      }
      ++v16;
      v17 += 6;
    }
    while ( v36 > v16 );
    v13 = s;
  }
  free(ptr);
  V_LOCK(v20);
  V_INT((int)&v48, "chain");
  v21 = logfmt_raw((int)v49, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_nonce_counter_CKB_2042",
    34,
    418,
    40,
    v49);
  return v34 != v13;
}
