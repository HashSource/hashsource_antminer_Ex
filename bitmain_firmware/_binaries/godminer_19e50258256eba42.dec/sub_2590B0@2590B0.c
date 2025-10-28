int __fastcall sub_2590B0(__int64 a1)
{
  __int64 v1; // r2
  __int64 v2; // r2
  __int64 v3; // r2
  __int64 v4; // r2
  __int64 v5; // r2
  __int64 v6; // r2
  __int64 v7; // r2
  __int64 v8; // r2
  __int64 v9; // r2
  __int64 v10; // r2
  __int64 v11; // r2
  __int64 v12; // r2
  __int64 v13; // r2
  __int64 v14; // r2
  __int64 v15; // r2
  __int64 v16; // r2
  __int64 v17; // r2
  __int64 v18; // r2
  __int64 v19; // r2
  __int64 v20; // r2
  __int64 v21; // r2
  __int64 v22; // r2
  __int64 v23; // r2
  __int64 v24; // r8
  __int64 v25; // r2
  __int64 v26; // r6
  __int64 v27; // r0
  __int64 v29; // [sp+0h] [bp-DCh]
  __int64 v30; // [sp+8h] [bp-D4h]
  __int64 v31; // [sp+10h] [bp-CCh]
  __int64 v32; // [sp+18h] [bp-C4h]
  __int64 v33; // [sp+20h] [bp-BCh]
  __int64 v34; // [sp+28h] [bp-B4h]
  __int64 v35; // [sp+30h] [bp-ACh]
  __int64 v36; // [sp+38h] [bp-A4h]
  __int64 v37; // [sp+40h] [bp-9Ch]
  __int64 v38; // [sp+48h] [bp-94h]
  __int64 v39; // [sp+50h] [bp-8Ch]
  __int64 v40; // [sp+58h] [bp-84h]
  __int64 v41; // [sp+60h] [bp-7Ch]
  __int64 v42; // [sp+68h] [bp-74h]
  __int64 v43; // [sp+70h] [bp-6Ch]
  __int64 v44; // [sp+78h] [bp-64h]
  __int64 v45; // [sp+80h] [bp-5Ch]
  __int64 v46; // [sp+88h] [bp-54h]
  __int64 v47; // [sp+90h] [bp-4Ch]
  __int64 v48; // [sp+98h] [bp-44h]
  __int64 v49; // [sp+A0h] [bp-3Ch]
  __int64 v50; // [sp+A8h] [bp-34h]
  __int64 *v51; // [sp+B4h] [bp-28h]
  int i; // [sp+BCh] [bp-20h]

  v51 = (__int64 *)a1;
  for ( i = 0; i <= 23; ++i )
  {
    sub_258738((int)v51);
    v1 = v51[1];
    HIDWORD(v50) = v1 >> 31;
    LODWORD(v50) = (HIDWORD(v1) >> 31) | (2 * v1);
    v51[1] = v50;
    v2 = v51[2];
    LODWORD(v49) = v2 >> 2;
    HIDWORD(v49) = ((_DWORD)v2 << 30) | (HIDWORD(v2) >> 2);
    v51[2] = v49;
    v3 = v51[3];
    HIDWORD(v48) = v3 >> 4;
    LODWORD(v48) = (HIDWORD(v3) >> 4) | ((_DWORD)v3 << 28);
    v51[3] = v48;
    v4 = v51[4];
    HIDWORD(v47) = v4 >> 5;
    LODWORD(v47) = (HIDWORD(v4) >> 5) | ((_DWORD)v4 << 27);
    v51[4] = v47;
    v5 = v51[5];
    LODWORD(v46) = v5 >> 28;
    HIDWORD(v46) = (16 * v5) | (HIDWORD(v5) >> 28);
    v51[5] = v46;
    v6 = v51[6];
    LODWORD(v45) = v6 >> 20;
    HIDWORD(v45) = ((_DWORD)v6 << 12) | (HIDWORD(v6) >> 20);
    v51[6] = v45;
    v7 = v51[7];
    HIDWORD(v44) = v7 >> 26;
    LODWORD(v44) = (HIDWORD(v7) >> 26) | ((_DWORD)v7 << 6);
    v51[7] = v44;
    v8 = v51[8];
    LODWORD(v43) = v8 >> 9;
    HIDWORD(v43) = ((_DWORD)v8 << 23) | (HIDWORD(v8) >> 9);
    v51[8] = v43;
    v9 = v51[9];
    HIDWORD(v42) = v9 >> 12;
    LODWORD(v42) = (HIDWORD(v9) >> 12) | ((_DWORD)v9 << 20);
    v51[9] = v42;
    v10 = v51[10];
    HIDWORD(v41) = v10 >> 29;
    LODWORD(v41) = (HIDWORD(v10) >> 29) | (8 * v10);
    v51[10] = v41;
    v11 = v51[11];
    HIDWORD(v40) = v11 >> 22;
    LODWORD(v40) = (HIDWORD(v11) >> 22) | ((_DWORD)v11 << 10);
    v51[11] = v40;
    v12 = v51[12];
    LODWORD(v39) = v12 >> 21;
    HIDWORD(v39) = ((_DWORD)v12 << 11) | (HIDWORD(v12) >> 21);
    v51[12] = v39;
    v13 = v51[13];
    HIDWORD(v38) = v13 >> 7;
    LODWORD(v38) = (HIDWORD(v13) >> 7) | ((_DWORD)v13 << 25);
    v51[13] = v38;
    v14 = v51[14];
    LODWORD(v37) = v14 >> 25;
    HIDWORD(v37) = ((_DWORD)v14 << 7) | (HIDWORD(v14) >> 25);
    v51[14] = v37;
    v15 = v51[15];
    LODWORD(v36) = v15 >> 23;
    HIDWORD(v36) = ((_DWORD)v15 << 9) | (HIDWORD(v15) >> 23);
    v51[15] = v36;
    v16 = v51[16];
    LODWORD(v35) = v16 >> 19;
    HIDWORD(v35) = ((_DWORD)v16 << 13) | (HIDWORD(v16) >> 19);
    v51[16] = v35;
    v17 = v51[17];
    HIDWORD(v34) = v17 >> 17;
    LODWORD(v34) = (HIDWORD(v17) >> 17) | ((_DWORD)v17 << 15);
    v51[17] = v34;
    v18 = v51[18];
    HIDWORD(v33) = v18 >> 11;
    LODWORD(v33) = (HIDWORD(v18) >> 11) | ((_DWORD)v18 << 21);
    v51[18] = v33;
    v19 = v51[19];
    HIDWORD(v32) = v19 >> 24;
    LODWORD(v32) = HIBYTE(HIDWORD(v19)) | ((_DWORD)v19 << 8);
    v51[19] = v32;
    v20 = v51[20];
    HIDWORD(v31) = v20 >> 14;
    LODWORD(v31) = (HIDWORD(v20) >> 14) | ((_DWORD)v20 << 18);
    v51[20] = v31;
    v21 = v51[21];
    HIDWORD(v30) = v21 >> 30;
    LODWORD(v30) = (HIDWORD(v21) >> 30) | (4 * v21);
    v51[21] = v30;
    v22 = v51[22];
    LODWORD(v29) = v22 >> 3;
    HIDWORD(v29) = ((_DWORD)v22 << 29) | (HIDWORD(v22) >> 3);
    v51[22] = v29;
    v23 = v51[23];
    LODWORD(v24) = v23 >> 8;
    HIDWORD(v24) = ((_DWORD)v23 << 24) | (HIDWORD(v23) >> 8);
    v51[23] = v24;
    v25 = v51[24];
    HIDWORD(v26) = v25 >> 18;
    LODWORD(v26) = (HIDWORD(v25) >> 18) | ((_DWORD)v25 << 14);
    v51[24] = v26;
    sub_258B84(v51);
    LODWORD(v27) = v51;
    sub_258D8C(v27);
    a1 = *v51;
    *v51 ^= qword_5ABAF8[i];
  }
  return a1;
}
