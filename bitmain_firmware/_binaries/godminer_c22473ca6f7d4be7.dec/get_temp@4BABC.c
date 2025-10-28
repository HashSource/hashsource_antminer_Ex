int __fastcall get_temp(int a1)
{
  int v1; // r6
  int *v2; // r0
  int *v3; // r7
  int *v4; // r7
  int v5; // r4
  int v6; // t1
  int *v7; // r3
  int v8; // r2
  int v9; // t1
  int *v10; // r3
  int v11; // r2
  int v12; // t1
  int result; // r0
  int v14; // r6
  int *v15; // r0
  int *v16; // r7
  int *v17; // r7
  signed int v18; // r4
  int v19; // t1
  signed int *v20; // r3
  signed int v21; // r2
  signed int v22; // t1
  signed int *v23; // r3
  signed int v24; // r2
  signed int v25; // t1
  int v26; // r4
  int v27; // r6
  int *all_created_runtime; // r0
  int *v29; // r7
  int *v30; // r7
  signed int v31; // r4
  int v32; // t1
  signed int *v33; // r3
  signed int v34; // r2
  signed int v35; // t1
  signed int *v36; // r3
  signed int v37; // r2
  signed int v38; // t1
  int v39; // [sp+4h] [bp-D8h] BYREF
  signed int *v40; // [sp+8h] [bp-D4h] BYREF
  signed int *v41; // [sp+Ch] [bp-D0h]
  signed int *v42; // [sp+10h] [bp-CCh]
  signed int *v43; // [sp+14h] [bp-C8h]
  int v44; // [sp+20h] [bp-BCh]
  int v45; // [sp+24h] [bp-B8h]

  switch ( a1 )
  {
    case 0:
      v27 = 0;
      v39 = 0;
      all_created_runtime = (int *)get_all_created_runtime(&v39);
      v29 = all_created_runtime;
      if ( v39 <= 0 )
        goto LABEL_51;
      read_status_from_monitor(&v40, *all_created_runtime);
      if ( v39 <= 0 )
        goto LABEL_51;
      v30 = v29 - 1;
      v31 = 0x80000000;
      do
      {
        v32 = v30[1];
        ++v30;
        read_status_from_monitor(&v40, v32);
        if ( v44 > 0 )
        {
          v33 = v40;
          do
          {
            v35 = *v33++;
            v34 = v35;
            if ( v31 < v35 )
              v31 = v34;
          }
          while ( &v40[v44] != v33 );
        }
        if ( v45 > 0 )
        {
          v36 = v42;
          do
          {
            v38 = *v36++;
            v37 = v38;
            if ( v31 < v38 )
              v31 = v37;
          }
          while ( &v42[v45] != v36 );
        }
        ++v27;
      }
      while ( v27 < v39 );
      return v31;
    case 1:
      v26 = sub_4B970();
      goto LABEL_33;
    case 2:
      v14 = 0;
      v39 = 0;
      v15 = (int *)get_all_created_runtime(&v39);
      v16 = v15;
      if ( v39 <= 0 || (read_status_from_monitor(&v40, *v15), v39 <= 0) )
      {
LABEL_51:
        v26 = 0x80000000;
        goto LABEL_33;
      }
      v17 = v16 - 1;
      v18 = 0x80000000;
      do
      {
        v19 = v17[1];
        ++v17;
        read_status_from_monitor(&v40, v19);
        if ( v44 > 0 )
        {
          v20 = v41;
          do
          {
            v22 = *v20++;
            v21 = v22;
            if ( v18 < v22 )
              v18 = v21;
          }
          while ( &v41[v44] != v20 );
        }
        if ( v45 > 0 )
        {
          v23 = v43;
          do
          {
            v25 = *v23++;
            v24 = v25;
            if ( v18 < v25 )
              v18 = v24;
          }
          while ( &v43[v45] != v23 );
        }
        ++v14;
      }
      while ( v14 < v39 );
      result = v18;
      break;
    case 3:
      v1 = 0;
      v39 = 0;
      v2 = (int *)get_all_created_runtime(&v39);
      v3 = v2;
      if ( v39 <= 0 || (read_status_from_monitor(&v40, *v2), v39 <= 0) )
      {
        v26 = 0x7FFFFFFF;
LABEL_33:
        result = v26;
      }
      else
      {
        v4 = v3 - 1;
        v5 = 0x7FFFFFFF;
        do
        {
          v6 = v4[1];
          ++v4;
          read_status_from_monitor(&v40, v6);
          if ( v44 > 0 )
          {
            v7 = v41;
            do
            {
              v9 = *v7++;
              v8 = v9;
              if ( v5 >= v9 )
                v5 = v8;
            }
            while ( &v41[v44] != v7 );
          }
          if ( v45 > 0 )
          {
            v10 = v43;
            do
            {
              v12 = *v10++;
              v11 = v12;
              if ( v5 >= v12 )
                v5 = v11;
            }
            while ( &v43[v45] != v10 );
          }
          ++v1;
        }
        while ( v1 < v39 );
        result = v5;
      }
      break;
    default:
      return sub_4BA3C(a1);
  }
  return result;
}
