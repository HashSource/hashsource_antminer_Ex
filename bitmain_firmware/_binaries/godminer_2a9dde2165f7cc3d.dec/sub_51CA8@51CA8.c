int __fastcall sub_51CA8(int a1, int *a2)
{
  int *v2; // r10
  int v3; // r7
  int v4; // r6
  int v5; // r9
  int v6; // r8
  int v8; // r0
  _DWORD *v9; // r11
  double *v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r11
  char v25; // r10
  int v26; // r0
  int v28; // r0
  int v29; // r0
  double *v30; // [sp+10h] [bp-1074h]
  int v31; // [sp+10h] [bp-1074h]
  int v32; // [sp+24h] [bp-1060h] BYREF
  int v33; // [sp+28h] [bp-105Ch]
  int v34; // [sp+34h] [bp-1050h] BYREF
  int v35; // [sp+38h] [bp-104Ch]
  int v36; // [sp+3Ch] [bp-1048h]
  int v37; // [sp+40h] [bp-1044h]
  int v38; // [sp+44h] [bp-1040h]
  int v39; // [sp+48h] [bp-103Ch]
  int v40; // [sp+4Ch] [bp-1038h]
  int v41; // [sp+50h] [bp-1034h]
  int v42; // [sp+54h] [bp-1030h] BYREF
  int v43; // [sp+58h] [bp-102Ch]
  int v44; // [sp+5Ch] [bp-1028h]
  int v45; // [sp+60h] [bp-1024h]
  int v46; // [sp+64h] [bp-1020h]
  int v47; // [sp+68h] [bp-101Ch]
  int v48; // [sp+6Ch] [bp-1018h]
  int v49; // [sp+70h] [bp-1014h]
  int v50; // [sp+74h] [bp-1010h]
  int v51; // [sp+78h] [bp-100Ch]
  char v52; // [sp+7Ch] [bp-1008h]
  _BYTE v53[4100]; // [sp+80h] [bp-1004h] BYREF

  v2 = (int *)a2[283];
  v3 = *a2;
  v4 = a2[1];
  v5 = dword_174268;
  v6 = dword_17426C;
  *(_DWORD *)(a1 + 460) = 1;
  v50 = v5;
  v32 = v3;
  v33 = v4;
  v51 = v6;
  if ( v2 )
  {
    v9 = a2 + 2;
    v8 = a2[2];
    v10 = (double *)(a2 + 268);
    v11 = a2[3];
    v12 = v9[2];
    v30 = v10;
    v13 = v9[3];
    v34 = v8;
    v35 = v11;
    v36 = v12;
    v37 = v13;
    v14 = v9[5];
    v15 = v9[6];
    v16 = v9[7];
    v38 = v9[4];
    v39 = v14;
    v40 = v15;
    v41 = v16;
    v17 = v2[1];
    v18 = v2[2];
    v19 = v2[3];
    v42 = *v2;
    v43 = v17;
    v44 = v18;
    v45 = v19;
    v20 = v2[7];
    v21 = v2[4];
    v22 = v2[5];
    v23 = v2[6];
    v46 = v21;
    v47 = v22;
    v48 = v23;
    v49 = v20;
    v24 = *(unsigned __int8 *)(a1 + 231);
    v25 = (unsigned int)*(v30 - 1);
    v52 = v25;
    if ( v24 )
    {
      V_LOCK(v21);
      v28 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v28);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/dhash_content/rvn/rvn_2020/rvn_2020_content.c",
        176,
        "push_work_rvn_2020",
        18,
        82,
        40,
        v53);
      *(_BYTE *)(a1 + 231) = 0;
      (*(void (__fastcall **)(int, int *))(a1 + 32))(a1, &v32);
    }
    else
    {
      v31 = memcmp(dword_174280, &v34, 0x20u);
      v26 = memcmp(dword_1742A0, &v42, 0x20u) | v31;
      if ( !(_BYTE)v26 )
      {
LABEL_4:
        dword_1742C0 = v5;
        dword_1742C4 = v6;
        dword_174280[0] = v34;
        dword_174280[1] = v35;
        dword_174280[2] = v36;
        dword_174280[3] = v37;
        dword_174270 = v3;
        dword_174274 = v4;
        unk_174290 = v38;
        unk_174294 = v39;
        unk_174298 = v40;
        unk_17429C = v41;
        dword_1742A0[0] = v42;
        dword_1742A0[1] = v43;
        dword_1742A0[2] = v44;
        dword_1742A0[3] = v45;
        unk_1742B0 = v46;
        unk_1742B4 = v47;
        unk_1742B8 = v48;
        unk_1742BC = v49;
        byte_1742C8 = v25;
        return 0;
      }
      V_LOCK(v26);
      v29 = logfmt_raw((int)v53, 0x1000u);
      V_UNLOCK(v29);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/dhash_content/rvn/rvn_2020/rvn_2020_content.c",
        176,
        "push_work_rvn_2020",
        18,
        91,
        40,
        v53);
      (*(void (__fastcall **)(int, int *))(a1 + 32))(a1, &v32);
    }
    v3 = v32;
    v4 = v33;
    v5 = v50;
    v6 = v51;
    v25 = v52;
    goto LABEL_4;
  }
  printf(aInvalidPointer, "work->private");
  return 0;
}
