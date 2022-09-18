#include "plotter.h"
const float font_test_gcode[] PROGMEM = {
PEN_UP,
PEN_UP,
55.9600,
5.8500,
PEN_DOWN,
PEN_DOWN,
56.5300,
5.8100,
56.9700,
5.7000,
57.0100,
5.9100,
57.1700,
6.9000,
57.3700,
8.0900,
58.1900,
8.0900,
58.1500,
7.8600,
57.8200,
5.8900,
57.6600,
4.9100,
57.4900,
3.9200,
57.2900,
2.7100,
57.2500,
2.4300,
57.2000,
1.9500,
57.1300,
1.2000,
57.1200,
1.1500,
57.0300,
0.1000,
56.2600,
0.1000,
56.2700,
0.2600,
56.3700,
1.4100,
56.0100,
0.8100,
55.5800,
0.3600,
55.1000,
0.0900,
54.5700,
-0.0000,
53.9800,
0.1400,
53.5600,
0.5200,
53.3200,
1.1300,
53.2400,
1.9100,
53.2700,
2.1700,
53.4100,
3.4300,
53.4800,
3.6000,
53.9400,
4.6900,
54.0100,
4.7600,
54.7800,
5.5300,
55.3300,
5.7700,
55.9600,
5.8500,
PEN_UP,
PEN_UP,
54.0700,
2.0000,
PEN_DOWN,
PEN_DOWN,
54.2200,
1.1600,
54.4300,
0.9300,
54.7300,
0.8500,
55.1300,
0.9700,
55.5300,
1.2800,
55.9000,
1.7400,
56.2100,
2.3200,
56.4600,
2.9600,
56.6200,
3.6400,
56.6400,
3.7200,
56.8200,
4.8000,
56.3600,
4.9800,
55.9300,
5.0400,
55.2500,
4.8800,
54.7600,
4.4700,
54.4200,
3.8900,
54.2000,
3.2300,
54.1000,
2.5700,
54.0700,
2.0000,
PEN_UP,
PEN_UP,
51.7800,
0.4900,
PEN_DOWN,
PEN_DOWN,
50.8700,
0.1400,
49.9500,
0.0200,
49.2200,
0.1500,
48.8000,
0.5800,
48.6500,
1.3600,
48.6600,
1.4500,
48.7600,
2.5300,
48.8100,
2.8500,
48.9800,
3.8300,
49.4800,
6.7900,
49.7000,
8.0900,
50.5400,
8.0900,
50.4900,
7.7800,
50.3200,
6.7900,
50.1600,
5.8000,
49.9900,
4.8200,
49.8300,
3.8300,
49.6100,
2.5300,
49.5100,
1.7100,
49.5400,
1.2000,
49.7100,
0.9400,
50.0500,
0.8600,
50.8200,
0.9800,
50.8400,
0.9900,
51.7800,
1.3600,
51.7800,
0.4900,
PEN_UP,
PEN_UP,
43.1400,
3.1700,
PEN_DOWN,
PEN_DOWN,
43.1800,
3.4500,
43.2300,
3.9200,
43.3000,
4.6700,
43.3100,
4.7300,
43.4000,
5.7800,
44.1800,
5.7800,
44.1600,
5.6200,
44.0600,
4.4700,
44.4200,
5.0100,
44.8400,
5.4600,
45.3500,
5.7700,
45.9500,
5.8800,
46.6100,
5.7300,
47.0200,
5.3000,
47.2000,
4.5800,
47.1200,
3.6100,
46.2800,
3.6100,
46.3500,
4.2700,
46.2900,
4.7100,
46.1000,
4.9500,
45.8000,
5.0300,
45.1400,
4.7800,
44.5500,
4.1400,
44.0900,
3.2500,
44.0900,
3.2300,
43.8200,
2.2400,
43.8000,
2.1600,
43.6400,
1.1700,
43.4600,
0.1000,
42.6300,
0.1000,
42.6400,
0.1600,
42.8000,
1.1400,
42.9700,
2.1300,
43.1400,
3.1700,
PEN_UP,
PEN_UP,
40.9300,
3.6800,
PEN_DOWN,
PEN_DOWN,
40.8600,
4.2800,
40.6600,
4.7000,
40.3300,
4.9600,
39.8700,
5.0400,
39.3300,
4.9200,
38.8800,
4.5800,
38.5200,
4.0900,
38.2700,
3.5000,
38.1200,
2.8500,
38.0600,
2.2000,
38.1300,
1.6000,
38.3300,
1.1700,
38.6600,
0.9200,
39.1200,
0.8300,
39.6600,
0.9500,
40.1100,
1.2800,
40.4600,
1.7800,
40.7200,
2.3700,
40.8800,
3.0200,
40.9300,
3.6800,
PEN_UP,
PEN_UP,
39.0200,
-0.0000,
PEN_DOWN,
PEN_DOWN,
38.2700,
0.1300,
37.7000,
0.5200,
37.3400,
1.1800,
37.2200,
2.0900,
37.3000,
3.0200,
37.5500,
3.9000,
37.9500,
4.6900,
38.4900,
5.3100,
39.1600,
5.7300,
39.9700,
5.8800,
40.7300,
5.7400,
41.2900,
5.3500,
41.6500,
4.6900,
41.7700,
3.7800,
41.6800,
2.8600,
41.4400,
1.9700,
41.0500,
1.1900,
40.5000,
0.5700,
39.8300,
0.1500,
39.0200,
-0.0000,
PEN_UP,
PEN_UP,
36.9600,
5.7800,
PEN_DOWN,
PEN_DOWN,
36.9300,
5.5000,
36.7900,
4.2200,
36.7200,
3.9300,
36.4400,
2.6700,
36.3500,
2.4300,
35.9200,
1.2400,
35.8400,
1.1000,
35.2400,
0.1000,
34.5500,
0.1000,
34.5200,
0.3000,
34.3900,
1.2900,
34.2300,
2.4800,
34.2000,
3.0500,
33.9400,
2.4400,
33.8200,
2.1800,
33.4100,
1.2700,
32.8700,
0.1000,
31.8700,
0.1000,
31.8900,
0.4400,
31.9400,
1.4400,
32.0000,
2.4400,
32.0500,
3.4400,
32.1100,
4.4400,
32.1800,
5.7800,
32.9800,
5.7800,
32.9500,
5.3500,
32.8700,
4.3500,
32.8000,
3.3500,
32.7000,
1.9200,
32.6300,
1.0600,
32.9600,
1.8100,
33.1200,
2.1800,
33.5200,
3.0900,
34.0900,
4.3600,
34.6800,
4.3600,
34.7200,
4.1000,
34.8500,
3.1100,
35.0200,
1.8500,
35.1100,
1.1000,
35.1200,
1.1300,
35.5300,
2.0700,
35.5600,
2.1700,
35.8400,
3.2200,
35.8700,
3.3600,
36.0500,
4.4800,
36.0600,
4.6300,
36.1500,
5.7800,
36.9600,
5.7800,
PEN_UP,
PEN_UP,
24.9700,
3.6800,
PEN_DOWN,
PEN_DOWN,
24.9000,
4.2800,
24.7000,
4.7000,
24.3700,
4.9600,
23.9200,
5.0400,
23.3800,
4.9200,
22.9200,
4.5800,
22.5700,
4.0900,
22.3100,
3.5000,
22.1600,
2.8500,
22.1100,
2.2000,
22.1800,
1.6000,
22.3800,
1.1700,
22.7100,
0.9200,
23.1600,
0.8300,
23.7000,
0.9500,
24.1500,
1.2800,
24.5100,
1.7800,
24.7600,
2.3700,
24.9200,
3.0200,
24.9700,
3.6800,
PEN_UP,
PEN_UP,
23.0700,
-0.0000,
PEN_DOWN,
PEN_DOWN,
22.3100,
0.1300,
21.7400,
0.5200,
21.3900,
1.1800,
21.2700,
2.0900,
21.3500,
3.0200,
21.5900,
3.9000,
21.9900,
4.6900,
22.5300,
5.3100,
23.2100,
5.7300,
24.0200,
5.8800,
24.7700,
5.7400,
25.3400,
5.3500,
25.6900,
4.6900,
25.8100,
3.7800,
25.7300,
2.8600,
25.4900,
1.9700,
25.0900,
1.1900,
24.5500,
0.5700,
23.8700,
0.1500,
23.0700,
-0.0000,
PEN_UP,
PEN_UP,
19.8600,
0.4900,
PEN_DOWN,
PEN_DOWN,
18.9600,
0.1400,
18.0400,
0.0200,
17.3100,
0.1500,
16.8900,
0.5800,
16.7400,
1.3600,
16.7500,
1.4500,
16.8500,
2.5300,
16.9000,
2.8500,
17.2300,
4.8200,
17.4000,
5.8000,
17.5700,
6.7900,
17.7900,
8.0900,
18.6300,
8.0900,
18.5800,
7.7800,
18.4100,
6.7900,
18.2500,
5.8000,
18.0800,
4.8200,
17.9200,
3.8300,
17.7000,
2.5300,
17.5900,
1.7100,
17.6300,
1.2000,
17.8000,
0.9400,
18.1400,
0.8600,
18.9100,
0.9800,
18.9200,
0.9900,
19.8600,
1.3600,
19.8600,
0.4900,
PEN_UP,
PEN_UP,
14.5500,
0.4900,
PEN_DOWN,
PEN_DOWN,
13.6400,
0.1400,
12.7200,
0.0200,
11.9900,
0.1500,
11.5700,
0.5800,
11.4200,
1.3600,
11.4300,
1.4500,
11.5300,
2.5300,
11.5800,
2.8500,
12.2500,
6.7900,
12.4700,
8.0900,
13.3100,
8.0900,
13.2600,
7.7800,
13.0900,
6.7900,
12.9300,
5.8000,
12.7600,
4.8200,
12.6000,
3.8300,
12.3800,
2.5300,
12.2800,
1.7100,
12.3100,
1.2000,
12.4800,
0.9400,
12.8200,
0.8600,
13.5900,
0.9800,
13.6100,
0.9900,
14.5500,
1.3600,
14.5500,
0.4900,
PEN_UP,
PEN_UP,
7.1800,
3.3800,
PEN_DOWN,
PEN_DOWN,
8.0400,
3.4500,
8.5900,
3.6600,
8.8700,
3.9600,
8.9500,
4.3100,
8.9000,
4.6100,
8.7300,
4.8600,
8.4500,
5.0300,
8.0600,
5.0900,
7.5000,
4.9700,
7.0500,
4.6200,
6.6900,
4.0900,
6.4200,
3.3800,
7.1800,
3.3800,
PEN_UP,
PEN_UP,
6.3000,
2.6200,
PEN_DOWN,
PEN_DOWN,
6.2600,
2.3500,
6.2500,
2.0900,
6.3300,
1.5500,
6.5600,
1.1500,
6.9500,
0.9000,
7.5100,
0.8200,
8.3300,
0.8900,
9.0600,
1.0600,
9.0600,
0.2500,
8.2700,
0.0700,
7.3700,
-0.0000,
6.5000,
0.1300,
5.8900,
0.5300,
5.5400,
1.1900,
5.4200,
2.0800,
5.4500,
2.3200,
5.6200,
3.5500,
5.6900,
3.7000,
6.1800,
4.7500,
6.2500,
4.8200,
7.0300,
5.5700,
7.5500,
5.8000,
8.1100,
5.8800,
8.8200,
5.7700,
9.3600,
5.4600,
9.6900,
4.9900,
9.8000,
4.4100,
9.6500,
3.6700,
9.2000,
3.1100,
8.3900,
2.7500,
8.2900,
2.7400,
7.1900,
2.6200,
6.3000,
2.6200,
PEN_UP,
PEN_UP,
3.9300,
0.1000,
PEN_DOWN,
PEN_DOWN,
3.0900,
0.1000,
3.1200,
0.3200,
3.4600,
2.2900,
3.6600,
3.4900,
3.3600,
3.4900,
2.3600,
3.4900,
1.0700,
3.4900,
1.0300,
3.2800,
0.7000,
1.3000,
0.4900,
0.1000,
-0.3500,
0.1000,
-0.3100,
0.3400,
-0.1400,
1.3300,
0.0300,
2.3200,
0.1900,
3.3000,
0.5200,
5.2800,
0.6900,
6.2600,
0.8900,
7.4900,
1.7400,
7.4900,
1.7200,
7.4100,
1.5600,
6.4200,
1.3900,
5.4300,
1.2100,
4.3600,
1.5100,
4.3600,
2.5100,
4.3600,
3.8100,
4.3600,
3.8200,
4.4500,
3.9800,
5.4300,
4.1500,
6.4200,
4.3300,
7.4900,
5.1700,
7.4900,
5.1300,
7.2500,
4.6300,
4.2900,
4.4700,
3.3000,
4.3000,
2.3200,
4.1300,
1.3300,
3.9300,
0.1000,
PEN_UP,
PEN_UP,
10.6600,
13.5500,
PEN_DOWN,
PEN_DOWN,
10.6000,
13.5600,
9.5400,
13.7300,
8.6900,
14.2600,
8.1600,
15.1300,
8.1400,
15.2300,
7.9800,
16.3200,
8.0400,
16.7500,
8.2400,
18.1700,
8.4100,
18.5000,
9.0300,
19.7300,
9.5800,
20.3500,
10.2000,
20.8000,
10.8800,
21.0600,
11.6200,
21.1500,
12.5300,
21.0000,
13.2000,
20.5400,
13.6100,
19.8000,
13.7400,
18.8200,
13.7000,
18.2100,
13.5500,
17.2300,
13.3200,
17.2300,
10.3200,
17.2300,
9.1000,
17.2300,
9.0500,
16.8600,
9.0400,
16.5200,
9.1500,
15.7100,
9.5000,
15.0800,
10.0700,
14.7000,
10.8200,
14.5700,
10.9500,
14.5900,
12.0500,
14.8500,
12.1500,
14.9000,
13.1100,
15.4700,
13.1700,
15.4700,
13.1400,
15.3100,
12.9400,
14.1600,
12.4600,
13.9500,
11.9100,
13.7500,
11.3100,
13.6000,
10.6600,
13.5500,
PEN_UP,
PEN_UP,
12.7000,
18.1200,
PEN_DOWN,
PEN_DOWN,
12.7300,
18.4400,
12.7400,
18.7200,
12.6600,
19.3400,
12.4300,
19.8000,
12.0200,
20.1000,
11.4100,
20.1900,
10.6900,
20.0500,
10.0500,
19.6200,
9.5500,
18.9600,
9.2400,
18.1200,
9.4700,
18.1200,
11.4700,
18.1200,
12.7000,
18.1200,
PEN_UP,
PEN_UP,
7.5800,
23.3600,
PEN_DOWN,
PEN_DOWN,
7.5000,
22.9600,
5.9900,
15.1000,
5.7200,
13.7200,
5.6900,
13.7200,
4.6500,
13.7200,
4.7300,
14.1200,
4.9200,
15.1100,
5.3000,
17.0700,
5.5700,
18.4600,
5.5600,
18.4600,
2.5600,
18.4600,
1.5500,
18.4600,
1.4700,
18.0500,
1.2800,
17.0700,
0.9000,
15.1100,
0.6300,
13.7200,
0.6000,
13.7200,
-0.4400,
13.7200,
-0.3600,
14.1200,
1.1500,
21.9800,
1.4200,
23.3600,
1.4500,
23.3600,
2.4900,
23.3600,
2.4000,
22.9300,
2.0300,
20.9600,
1.7600,
19.5500,
1.7700,
19.5500,
4.7700,
19.5500,
5.7800,
19.5500,
5.8600,
19.9800,
6.2400,
21.9400,
6.5100,
23.3600,
6.5400,
23.3600,
7.5800,
23.3600,
PEN_UP,
PEN_UP,
10.7100,
26.6800,
PEN_DOWN,
PEN_DOWN,
10.6400,
26.6900,
9.6000,
26.8700,
9.5900,
26.8800,
8.7200,
27.4200,
8.6800,
27.4800,
8.1000,
28.3900,
8.0800,
28.5400,
7.9000,
29.6800,
7.9300,
29.9600,
8.0700,
31.2300,
8.1400,
31.4000,
8.5800,
32.5100,
8.9800,
33.0500,
9.4500,
33.4400,
9.9700,
33.6700,
10.5600,
33.7500,
11.3700,
33.6600,
12.0300,
33.3900,
12.5500,
32.8200,
12.7200,
32.0100,
12.5700,
31.4000,
12.1100,
30.8400,
11.9600,
30.7400,
10.9600,
30.1100,
10.8000,
30.0200,
9.9300,
29.5200,
8.9000,
28.9400,
8.9300,
28.9000,
9.6500,
28.1300,
9.6900,
28.1200,
10.7100,
27.8600,
11.5800,
28.0300,
12.1100,
28.2700,
12.4000,
28.5800,
12.8000,
28.9300,
13.1300,
28.7600,
13.2900,
28.3600,
13.0400,
27.6900,
12.3200,
27.1300,
11.5000,
26.7900,
10.7100,
26.6800,
PEN_UP,
PEN_UP,
10.5600,
32.5800,
PEN_DOWN,
PEN_DOWN,
9.9500,
32.4300,
9.4600,
31.9700,
9.0800,
31.2000,
9.0600,
31.1500,
8.8100,
30.1300,
9.2000,
30.3500,
10.4700,
31.0700,
10.7600,
31.2800,
11.8600,
32.0700,
11.3000,
32.4500,
10.5600,
32.5800,
PEN_UP,
PEN_UP,
15.6200,
32.0700,
PEN_DOWN,
PEN_DOWN,
15.6200,
31.9600,
15.5700,
29.9600,
15.5400,
28.8500,
15.5300,
28.6000,
15.5000,
27.3500,
15.3400,
26.8700,
14.9700,
26.7000,
14.5700,
26.8700,
14.4400,
27.3600,
14.4400,
27.5400,
14.4700,
28.5400,
14.5000,
29.7100,
14.5000,
29.8900,
14.5300,
30.8900,
14.5600,
32.0700,
14.5600,
32.2400,
14.5700,
33.2400,
14.5800,
34.4100,
14.5900,
34.5800,
14.6000,
35.5800,
14.6100,
36.7500,
14.7400,
37.2400,
15.1400,
37.4000,
15.5400,
37.2400,
15.6800,
36.7500,
15.6700,
36.5800,
15.6600,
35.5800,
15.6500,
34.4100,
15.6500,
34.2400,
15.6400,
33.2400,
15.6200,
32.0700,
PEN_UP,
PEN_UP,
18.6600,
32.0700,
PEN_DOWN,
PEN_DOWN,
18.6500,
31.9600,
18.6300,
30.9600,
18.6000,
29.9600,
18.5800,
28.8500,
18.5700,
28.6000,
18.5300,
27.3500,
18.3700,
26.8700,
18.0000,
26.7000,
17.6100,
26.8700,
17.4700,
27.3600,
17.4800,
27.5400,
17.5000,
28.5400,
17.5300,
29.7100,
17.5400,
29.8900,
17.5600,
30.8900,
17.5900,
32.0700,
17.5900,
32.2400,
17.6100,
33.2400,
17.6200,
34.4100,
17.6200,
34.5800,
17.6300,
35.5800,
17.6400,
36.7500,
17.7800,
37.2400,
18.1800,
37.4000,
18.5800,
37.2400,
18.7100,
36.7500,
18.7100,
36.5800,
18.7000,
35.5800,
18.6800,
34.4100,
18.6800,
34.2400,
18.6700,
33.2400,
18.6600,
32.0700,
PEN_UP,
PEN_UP,
22.6700,
32.3800,
PEN_DOWN,
PEN_DOWN,
21.9600,
32.1600,
21.4300,
31.4800,
21.1700,
30.6900,
21.0800,
29.8100,
21.1900,
28.9700,
21.5100,
28.3400,
21.8900,
28.0200,
22.3500,
27.9100,
22.8700,
28.0300,
23.3100,
28.4000,
23.6700,
29.0400,
23.8000,
29.8700,
23.8000,
29.9200,
23.7600,
30.9700,
23.5600,
31.7500,
23.1900,
32.2200,
22.6700,
32.3800,
PEN_UP,
PEN_UP,
22.3500,
26.6000,
PEN_DOWN,
PEN_DOWN,
21.5000,
26.8000,
20.7800,
27.4000,
20.7400,
27.4900,
20.2300,
28.4500,
20.2000,
28.6300,
20.0100,
29.8100,
20.0300,
30.0000,
20.1500,
31.1800,
20.2100,
31.3200,
20.6300,
32.3800,
21.0500,
32.9600,
21.5400,
33.3700,
22.1000,
33.6100,
22.7400,
33.7000,
23.2500,
33.6200,
23.6900,
33.4000,
23.7300,
33.3500,
24.3800,
32.5100,
24.3900,
32.4600,
24.7100,
31.4600,
24.7200,
31.3300,
24.8100,
30.2100,
24.7900,
30.0400,
24.6400,
28.8700,
24.6000,
28.7800,
24.1800,
27.7500,
24.1200,
27.6900,
23.3800,
26.8900,
22.8900,
26.6700,
22.3500,
26.6000,
PEN_UP,
PEN_UP,
20.4200,
23.7900,
PEN_DOWN,
PEN_DOWN,
20.3900,
23.6600,
20.2100,
22.6800,
19.4500,
18.7600,
19.2600,
17.7700,
19.0700,
16.7900,
18.6900,
14.8300,
18.4700,
13.7200,
18.4600,
13.7200,
17.4600,
13.7200,
17.4800,
13.8500,
17.6700,
14.8300,
18.0500,
16.7900,
18.2400,
17.7700,
18.4300,
18.7600,
19.1900,
22.6800,
19.4000,
23.7900,
19.4100,
23.7900,
20.4200,
23.7900,
PEN_UP,
PEN_UP,
17.3800,
23.7900,
PEN_DOWN,
PEN_DOWN,
17.3600,
23.6600,
17.1700,
22.6800,
16.4100,
18.7600,
16.2200,
17.7700,
16.0300,
16.7900,
15.6500,
14.8300,
15.4300,
13.7200,
15.4200,
13.7200,
14.4200,
13.7200,
14.4400,
13.8500,
14.6300,
14.8300,
15.0100,
16.7900,
15.2000,
17.7700,
15.3900,
18.7600,
16.1500,
22.6800,
16.3600,
23.7900,
16.3700,
23.7900,
17.3800,
23.7900,
PEN_UP,
PEN_UP,
26.4200,
18.3900,
PEN_DOWN,
PEN_DOWN,
26.3700,
17.9600,
26.1800,
16.5300,
26.0300,
16.2100,
25.4700,
14.9700,
24.9600,
14.3600,
24.3900,
13.9000,
23.7200,
13.6100,
22.9500,
13.5200,
21.9900,
13.7000,
21.2600,
14.2500,
20.8100,
15.1300,
20.8000,
15.2100,
20.6600,
16.2800,
20.7200,
16.7100,
20.9100,
18.1300,
21.0600,
18.4600,
21.6200,
19.7000,
22.1200,
20.3000,
22.7200,
20.7600,
23.4000,
21.0500,
24.1500,
21.1500,
25.0800,
20.9700,
25.8100,
20.4400,
26.2700,
19.5700,
26.2800,
19.4800,
26.4200,
18.3900,
PEN_UP,
PEN_UP,
24.7700,
15.6600,
PEN_DOWN,
PEN_DOWN,
24.8200,
15.7900,
25.2100,
16.8600,
25.2400,
17.0800,
25.3700,
18.3000,
25.2800,
19.0900,
25.0100,
19.6700,
24.5700,
20.0200,
23.9800,
20.1300,
23.4900,
20.0600,
23.0400,
19.8300,
23.0100,
19.8000,
22.3200,
19.0100,
22.2700,
18.8800,
21.8800,
17.8100,
21.8500,
17.6000,
21.7200,
16.3900,
21.8100,
15.6000,
22.0800,
15.0100,
22.5200,
14.6500,
23.1100,
14.5300,
23.6000,
14.6100,
24.0500,
14.8300,
24.0800,
14.8700,
24.7700,
15.6600,
PEN_UP,
PEN_UP,
40.0200,
20.9500,
PEN_DOWN,
PEN_DOWN,
39.8900,
20.6000,
39.5200,
19.6700,
39.1600,
18.7300,
37.7200,
15.0000,
37.2200,
13.7200,
36.2600,
13.7200,
36.2300,
14.0300,
36.1200,
15.0200,
35.8000,
18.0000,
35.6600,
19.3100,
35.6300,
19.2500,
35.2300,
18.3400,
34.8200,
17.4300,
34.4100,
16.5100,
34.0000,
15.6000,
33.6000,
14.6900,
33.1600,
13.7200,
32.2200,
13.7200,
32.2200,
13.8400,
32.1600,
14.8400,
32.1100,
15.8400,
32.0600,
16.8400,
32.0100,
17.8300,
31.9500,
18.8300,
31.9000,
19.8300,
31.8400,
20.9500,
31.8600,
20.9500,
32.8800,
20.9500,
32.8900,
20.6500,
32.9200,
19.6500,
32.9500,
18.6500,
32.9800,
17.6500,
33.0000,
16.6500,
33.0400,
15.3600,
33.0600,
15.4100,
33.4700,
16.3200,
33.8700,
17.2400,
34.2700,
18.1500,
34.6800,
19.0700,
35.0800,
19.9800,
35.5100,
20.9500,
36.3600,
20.9500,
36.3900,
20.6400,
36.4900,
19.6500,
36.6000,
18.6500,
36.7000,
17.6600,
36.8100,
16.6600,
36.9500,
15.3600,
37.1000,
15.8000,
37.4400,
16.7400,
37.7800,
17.6800,
38.1200,
18.6200,
38.4600,
19.5700,
38.9600,
20.9500,
38.9900,
20.9500,
40.0200,
20.9500,
PEN_UP,
PEN_UP,
39.0600,
26.6000,
PEN_DOWN,
PEN_DOWN,
38.2200,
26.8000,
37.5000,
27.4000,
37.4500,
27.4900,
36.9400,
28.4500,
36.9100,
28.6300,
36.7300,
29.8100,
36.7500,
30.0000,
36.8700,
31.1800,
36.9200,
31.3200,
37.3500,
32.3800,
37.7600,
32.9600,
38.2500,
33.3700,
38.8200,
33.6100,
39.4500,
33.7000,
39.9600,
33.6200,
40.4100,
33.4000,
40.4400,
33.3500,
41.0900,
32.5100,
41.1100,
32.4600,
41.4200,
31.4600,
41.4300,
31.3300,
41.5200,
30.2100,
41.5000,
30.0400,
41.3600,
28.8700,
41.3200,
28.7800,
40.8900,
27.7500,
40.8300,
27.6900,
40.0900,
26.8900,
39.6000,
26.6700,
39.0600,
26.6000,
PEN_UP,
PEN_UP,
39.3800,
32.3800,
PEN_DOWN,
PEN_DOWN,
38.6800,
32.1600,
38.1500,
31.4800,
37.8800,
30.6900,
37.8000,
29.8100,
37.9000,
28.9700,
38.2200,
28.3400,
38.6100,
28.0200,
39.0600,
27.9100,
39.5800,
28.0300,
40.0300,
28.4000,
40.3800,
29.0400,
40.5200,
29.8700,
40.5100,
29.9200,
40.4700,
30.9700,
40.2700,
31.7500,
39.9100,
32.2200,
39.3800,
32.3800,
PEN_UP,
PEN_UP,
35.9300,
32.7800,
PEN_DOWN,
PEN_DOWN,
35.8300,
32.3400,
35.6000,
31.3700,
35.1500,
29.4200,
34.8300,
28.0100,
34.7700,
27.8600,
34.3200,
26.7900,
34.1000,
26.5400,
33.8100,
26.4600,
33.5300,
26.5700,
33.2800,
26.9000,
33.2300,
27.0800,
32.8900,
28.2100,
32.8500,
28.4800,
32.6700,
29.7300,
32.6400,
29.9500,
32.4900,
31.1700,
32.4400,
31.0200,
32.0500,
29.9400,
31.9300,
29.5500,
31.6300,
28.6000,
31.2200,
27.2600,
31.0200,
26.8900,
30.8100,
26.6000,
30.5000,
26.5000,
30.2900,
26.6100,
30.0900,
26.9700,
30.0300,
27.2200,
29.7000,
28.4300,
29.6500,
28.8000,
29.5100,
29.7900,
29.3100,
31.1500,
29.1800,
32.1200,
29.1100,
33.0900,
29.2700,
33.5400,
29.6600,
33.7200,
29.9900,
33.5900,
30.1700,
33.1900,
30.2800,
32.2400,
30.3600,
31.2900,
30.4100,
30.8300,
30.5200,
29.8300,
30.6800,
28.3800,
30.7800,
28.7500,
31.0400,
29.7100,
31.3000,
30.6800,
31.5700,
31.6400,
31.9300,
32.9800,
32.1700,
33.5200,
32.5500,
33.7000,
32.9100,
33.5000,
33.1300,
32.8900,
33.1500,
32.7200,
33.3000,
31.7300,
33.4800,
30.5600,
33.5200,
30.2800,
33.6700,
29.2900,
33.8600,
28.0200,
33.9500,
28.4100,
34.2600,
29.7800,
34.3100,
30.0700,
34.7000,
32.0300,
34.9500,
33.3100,
35.1100,
33.6000,
35.4200,
33.7000,
35.8100,
33.5200,
35.9800,
33.0800,
35.9300,
32.7800,
PEN_UP,
PEN_UP,
47.0700,
31.7700,
PEN_DOWN,
PEN_DOWN,
46.9100,
31.1600,
46.5200,
30.9600,
46.1800,
31.1200,
46.0600,
31.6000,
46.0400,
32.0500,
46.0300,
32.6000,
45.2600,
32.3900,
44.6600,
32.0200,
44.2200,
31.4900,
43.8600,
30.7500,
43.8600,
30.4800,
43.8600,
29.4800,
43.8700,
28.4800,
43.8700,
27.2000,
43.7400,
26.7100,
43.3300,
26.5500,
42.9800,
26.7100,
42.8600,
27.2000,
42.8600,
27.4800,
42.8600,
30.4800,
42.8600,
31.7500,
42.8700,
32.3900,
42.8800,
33.0300,
43.0000,
33.5200,
43.3600,
33.6800,
43.7600,
33.4200,
43.9000,
32.6100,
44.0600,
32.7400,
44.9900,
33.5100,
45.5800,
33.7300,
46.2000,
33.8100,
46.5800,
33.7100,
46.8500,
33.4100,
46.8700,
33.3100,
47.0700,
32.2200,
47.0700,
31.7700,
PEN_UP,
PEN_UP,
49.5500,
32.0700,
PEN_DOWN,
PEN_DOWN,
49.5500,
31.9600,
49.5300,
30.9600,
49.5000,
29.9600,
49.4700,
28.8500,
49.4700,
28.6000,
49.4300,
27.3500,
49.2700,
26.8700,
48.9000,
26.7000,
48.5000,
26.8700,
48.3700,
27.3600,
48.3700,
27.5400,
48.4000,
28.5400,
48.4300,
29.7100,
48.4300,
29.8900,
48.4600,
30.8900,
48.4900,
32.0700,
48.4900,
32.2400,
48.5000,
33.2400,
48.5200,
34.4100,
48.5200,
34.5800,
48.5300,
35.5800,
48.5400,
36.7500,
48.6700,
37.2400,
49.0700,
37.4000,
49.4800,
37.2400,
49.6100,
36.7500,
49.6100,
36.5800,
49.5900,
35.5800,
49.5800,
34.4100,
49.5800,
34.2400,
49.5700,
33.2400,
49.5500,
32.0700,
PEN_UP,
PEN_UP,
53.8000,
32.5300,
PEN_DOWN,
PEN_DOWN,
53.0000,
32.3700,
52.4300,
31.8800,
52.0900,
31.0800,
52.0900,
31.0100,
51.9800,
29.9500,
52.1000,
29.1700,
52.4700,
28.5100,
53.0100,
28.0600,
53.6300,
27.9100,
54.4000,
28.1100,
55.0000,
28.6500,
55.1600,
28.8500,
55.1600,
28.9100,
55.1400,
29.9700,
55.1500,
30.7200,
55.1600,
31.4800,
54.6100,
32.2700,
53.8000,
32.5300,
PEN_UP,
PEN_UP,
56.2000,
32.7000,
PEN_DOWN,
PEN_DOWN,
56.1800,
32.2500,
56.1300,
30.8000,
56.1400,
30.6700,
56.1900,
29.6700,
56.2400,
28.6700,
56.3000,
27.5400,
56.3100,
27.3900,
56.1600,
26.9600,
55.8100,
26.7900,
55.5200,
26.9400,
55.3200,
27.3800,
54.5000,
26.8600,
53.6300,
26.6800,
53.6100,
26.6900,
52.6100,
26.9100,
52.5800,
26.9300,
51.7800,
27.5800,
51.7300,
27.6600,
51.2100,
28.6200,
51.1900,
28.7800,
51.0200,
29.9200,
51.0500,
30.2000,
51.2100,
31.4800,
51.2800,
31.6300,
51.7800,
32.6900,
51.8500,
32.7500,
52.6600,
33.4800,
52.7300,
33.4900,
53.7700,
33.7400,
54.7400,
33.5000,
55.2500,
33.0600,
55.2700,
33.3900,
55.3200,
34.3900,
55.3600,
35.3900,
55.4300,
36.7300,
55.5900,
37.1600,
55.9200,
37.3000,
56.2900,
37.1500,
56.4100,
36.6800,
56.3900,
36.1900,
56.3300,
35.1900,
56.2800,
34.1900,
56.2000,
32.7000,
PEN_UP,
PEN_UP,
53.0900,
40.5200,
PEN_DOWN,
PEN_DOWN,
53.0800,
40.5200,
52.0700,
40.5200,
52.0700,
40.5600,
52.0700,
49.5600,
52.0700,
50.5900,
52.0800,
50.5900,
53.0900,
50.5900,
53.0900,
50.5600,
53.0900,
41.5600,
53.0900,
40.5200,
PEN_UP,
PEN_UP,
58.9800,
42.3000,
PEN_DOWN,
PEN_DOWN,
58.9800,
42.3800,
58.9800,
45.3800,
58.9800,
46.4500,
58.2500,
46.7600,
57.5400,
46.8400,
56.7800,
46.6600,
56.2100,
46.1300,
55.8500,
45.2700,
55.8400,
45.1800,
55.7300,
44.1100,
55.7400,
44.0400,
55.8200,
42.9700,
56.1000,
42.1500,
56.5800,
41.6400,
57.2800,
41.4800,
58.1600,
41.7000,
58.1600,
41.7100,
58.9800,
42.3000,
PEN_UP,
PEN_UP,
60.0000,
40.5200,
PEN_DOWN,
PEN_DOWN,
59.9900,
40.5200,
58.9800,
40.5200,
58.9800,
41.2800,
58.9200,
41.2300,
58.0700,
40.5700,
58.0400,
40.5600,
57.0400,
40.3200,
57.0300,
40.3200,
56.0600,
40.5700,
56.0400,
40.5900,
55.3200,
41.3200,
55.2600,
41.4500,
54.8400,
42.5100,
54.8100,
42.8000,
54.6800,
44.0800,
54.7300,
44.4000,
54.9000,
45.7200,
54.9800,
45.8800,
55.4900,
46.9400,
55.5500,
46.9900,
56.3500,
47.6900,
56.3700,
47.7000,
57.3700,
47.9500,
58.2100,
47.8300,
58.9800,
47.4600,
58.9800,
47.5300,
58.9800,
49.5300,
58.9800,
50.5900,
58.9900,
50.5900,
60.0000,
50.5900,
60.0000,
50.5600,
60.0000,
41.5600,
60.0000,
40.5200,
PEN_UP,
PEN_UP,
51.1000,
46.4200,
PEN_DOWN,
PEN_DOWN,
51.0500,
46.4200,
50.6000,
46.5200,
50.1000,
46.5500,
49.1900,
46.3000,
49.1700,
46.2800,
48.3500,
45.6500,
48.3500,
45.5900,
48.3500,
41.5900,
48.3500,
40.5200,
48.3400,
40.5200,
47.3300,
40.5200,
47.3300,
40.6400,
47.3300,
46.6400,
47.3300,
47.7500,
47.3400,
47.7500,
48.3500,
47.7500,
48.3500,
47.7200,
48.3500,
46.6800,
48.4800,
46.7900,
49.4100,
47.5100,
50.3600,
47.7500,
50.7400,
47.7300,
51.1000,
47.6700,
51.1000,
47.5500,
51.1000,
46.4200,
PEN_UP,
PEN_UP,
45.7600,
44.1300,
PEN_DOWN,
PEN_DOWN,
45.7200,
43.8400,
45.5700,
42.5500,
45.5000,
42.4000,
45.0000,
41.3400,
44.9400,
41.2900,
44.1100,
40.5800,
44.0300,
40.5600,
42.9700,
40.3200,
42.8800,
40.3400,
41.8200,
40.5800,
41.7600,
40.6300,
40.9300,
41.3400,
40.8600,
41.4900,
40.3700,
42.5500,
40.3300,
42.8500,
40.1800,
44.1300,
40.2200,
44.4300,
40.3700,
45.7100,
40.4400,
45.8700,
40.9300,
46.9200,
41.0000,
46.9800,
41.8200,
47.7000,
41.9100,
47.7200,
42.9700,
47.9500,
43.0500,
47.9300,
44.1100,
47.7000,
44.1800,
47.6400,
45.0000,
46.9200,
45.0700,
46.7700,
45.5700,
45.7100,
45.6000,
45.4200,
45.7600,
44.1300,
PEN_UP,
PEN_UP,
44.7100,
44.1300,
PEN_DOWN,
PEN_DOWN,
44.7000,
44.2500,
44.5900,
45.3600,
44.2500,
46.2200,
43.7000,
46.7300,
42.9700,
46.9000,
42.2400,
46.7300,
41.6800,
46.2200,
41.3400,
45.3600,
41.3300,
45.2400,
41.2300,
44.1300,
41.2400,
44.0300,
41.3400,
42.9400,
41.6900,
42.0700,
42.2400,
41.5400,
42.9700,
41.3700,
43.7000,
41.5400,
44.2400,
42.0600,
44.5900,
42.9300,
44.6000,
43.0300,
44.7100,
44.1300,
PEN_UP,
PEN_UP,
39.1400,
47.7500,
PEN_DOWN,
PEN_DOWN,
39.1000,
47.5600,
38.8900,
46.5800,
38.6700,
45.6000,
38.2500,
43.6500,
38.0400,
42.6700,
37.8200,
41.6900,
37.5700,
40.5200,
36.6300,
40.5200,
36.5200,
40.9000,
36.2500,
41.8600,
35.9800,
42.8300,
35.7200,
43.7900,
35.4500,
44.7500,
35.0700,
46.0900,
34.9700,
45.7200,
34.7000,
44.7500,
34.4400,
43.7900,
34.1700,
42.8300,
33.9000,
41.8600,
33.5300,
40.5200,
32.6000,
40.5200,
32.5500,
40.7200,
32.1200,
42.6700,
31.9100,
43.6500,
31.4800,
45.6000,
31.2600,
46.5800,
31.0100,
47.7500,
31.0400,
47.7500,
32.0700,
47.7500,
32.1300,
47.4000,
32.3300,
46.4200,
32.5200,
45.4400,
32.9100,
43.4800,
33.1700,
42.1500,
33.2800,
42.5400,
33.5400,
43.5000,
33.8000,
44.4700,
34.0600,
45.4300,
34.3200,
46.4000,
34.6800,
47.7500,
35.5200,
47.7500,
35.6300,
47.3600,
36.1600,
45.4300,
36.4300,
44.4700,
36.7000,
43.5100,
37.0700,
42.1500,
37.1300,
42.4900,
37.3200,
43.4800,
37.5000,
44.4600,
37.8700,
46.4300,
38.1200,
47.7500,
38.1300,
47.7500,
39.1400,
47.7500,
PEN_UP,
PEN_UP,
26.0700,
44.1300,
PEN_DOWN,
PEN_DOWN,
26.0400,
43.8400,
25.8800,
42.5500,
25.8100,
42.4000,
25.3200,
41.3400,
25.2500,
41.2900,
24.4300,
40.5800,
24.3500,
40.5600,
23.2900,
40.3200,
23.2000,
40.3400,
22.1400,
40.5800,
22.0700,
40.6300,
21.2500,
41.3400,
21.1800,
41.4900,
20.6800,
42.5500,
20.6500,
42.8500,
20.5000,
44.1300,
20.5300,
44.4300,
20.6800,
45.7100,
20.7500,
45.8700,
21.2500,
46.9200,
21.3200,
46.9800,
22.1400,
47.7000,
22.2200,
47.7200,
23.2900,
47.9500,
23.3700,
47.9300,
24.4300,
47.7000,
24.5000,
47.6400,
25.3200,
46.9200,
25.3900,
46.7700,
25.8800,
45.7100,
25.9200,
45.4200,
26.0700,
44.1300,
PEN_UP,
PEN_UP,
25.0200,
44.1300,
PEN_DOWN,
PEN_DOWN,
25.0100,
44.2500,
24.9100,
45.3600,
24.5600,
46.2200,
24.0200,
46.7300,
23.2900,
46.9000,
22.5500,
46.7300,
22.0000,
46.2200,
21.6600,
45.3600,
21.6500,
45.2400,
21.5500,
44.1300,
21.5500,
44.0300,
21.6600,
42.9400,
22.0000,
42.0700,
22.5500,
41.5400,
23.2900,
41.3700,
24.0100,
41.5400,
24.5600,
42.0600,
24.9100,
42.9300,
24.9200,
43.0300,
25.0200,
44.1300,
PEN_UP,
PEN_UP,
18.9100,
40.5200,
PEN_DOWN,
PEN_DOWN,
18.9000,
40.5200,
17.8900,
40.5200,
17.8900,
40.5600,
17.8900,
49.5600,
17.8900,
50.5900,
17.9000,
50.5900,
18.9100,
50.5900,
18.9100,
50.5600,
18.9100,
41.5600,
18.9100,
40.5200,
PEN_UP,
PEN_UP,
15.8700,
40.5200,
PEN_DOWN,
PEN_DOWN,
15.8600,
40.5200,
14.8500,
40.5200,
14.8500,
40.5600,
14.8500,
49.5600,
14.8500,
50.5900,
14.8600,
50.5900,
15.8700,
50.5900,
15.8700,
50.5600,
15.8700,
41.5600,
15.8700,
40.5200,
PEN_UP,
PEN_UP,
13.3000,
44.0100,
PEN_DOWN,
PEN_DOWN,
13.0800,
44.0100,
10.0800,
44.0100,
8.8500,
44.0100,
8.8600,
43.9200,
9.0200,
42.8400,
9.4800,
42.0400,
10.1400,
41.5700,
11.0000,
41.4100,
11.1300,
41.4400,
12.2400,
41.7000,
12.2600,
41.7200,
13.1300,
42.2900,
13.1800,
42.2900,
13.1800,
42.1200,
13.1800,
40.9600,
13.1200,
40.9300,
12.1300,
40.5300,
12.0600,
40.5200,
11.0100,
40.3500,
10.8300,
40.3800,
9.6700,
40.5900,
9.5700,
40.6700,
8.6600,
41.3200,
8.5800,
41.4700,
8.0300,
42.5000,
7.9900,
42.8000,
7.8200,
44.0900,
7.8500,
44.3900,
8.0200,
45.6900,
8.1000,
45.8500,
8.6200,
46.9100,
8.7100,
46.9800,
9.5600,
47.6900,
9.6700,
47.7200,
10.7500,
47.9500,
10.8000,
47.9400,
11.8400,
47.7400,
11.8500,
47.7300,
12.6400,
47.1000,
12.6700,
47.0300,
13.1300,
46.0600,
13.1600,
45.8600,
13.3000,
44.6700,
13.3000,
44.0100,
PEN_UP,
PEN_UP,
12.3100,
44.9400,
PEN_DOWN,
PEN_DOWN,
12.2100,
45.7900,
11.9100,
46.4200,
11.4100,
46.8200,
10.7000,
46.9500,
9.9600,
46.8100,
9.4000,
46.3700,
9.0200,
45.7300,
8.8500,
44.9400,
9.0800,
44.9400,
11.0800,
44.9400,
12.3100,
44.9400,
PEN_UP,
PEN_UP,
6.1600,
40.5200,
PEN_DOWN,
PEN_DOWN,
6.1300,
40.5200,
5.0900,
40.5200,
5.0900,
40.8800,
5.0900,
43.8800,
5.0900,
45.2400,
5.0800,
45.2400,
2.0800,
45.2400,
1.0700,
45.2400,
1.0700,
44.8800,
1.0700,
41.8800,
1.0700,
40.5200,
1.0400,
40.5200,
0.0000,
40.5200,
0.0000,
40.8400,
0.0000,
48.8400,
0.0000,
50.1600,
0.0400,
50.1600,
1.0700,
50.1600,
1.0700,
49.7700,
1.0700,
47.7700,
1.0700,
46.3800,
1.0800,
46.3800,
4.0800,
46.3800,
5.0900,
46.3800,
5.0900,
46.7700,
5.0900,
48.7700,
5.0900,
50.1600,
5.1300,
50.1600,
6.1600,
50.1600,
6.1600,
49.8400,
6.1600,
41.8400,
6.1600,
40.5200,
PEN_UP,
PEN_UP,
6.7900,
36.1100,
PEN_DOWN,
PEN_DOWN,
6.7100,
35.3100,
6.7200,
34.7300,
6.7400,
34.1600,
6.7100,
33.6900,
6.6400,
32.2300,
6.6200,
31.7600,
6.5400,
30.3000,
6.5500,
30.0600,
6.6100,
28.8200,
6.6100,
28.5800,
6.6600,
27.3400,
6.5100,
26.8900,
6.1400,
26.7100,
5.7800,
26.8900,
5.6300,
27.3400,
5.6200,
27.5800,
5.5700,
28.8200,
5.5600,
29.0600,
5.5100,
30.3000,
5.5300,
31.2600,
5.3800,
31.2300,
4.3900,
31.0900,
3.2500,
30.9300,
3.0800,
30.8900,
2.1100,
30.6600,
0.9700,
30.3900,
0.9500,
30.0700,
0.8800,
28.7400,
0.8600,
28.4100,
0.7800,
27.0800,
0.6300,
26.6300,
0.2600,
26.4500,
-0.1100,
26.6300,
-0.2600,
27.0800,
-0.2600,
27.1000,
-0.2100,
28.1000,
-0.1700,
29.1300,
-0.1700,
29.1500,
-0.1200,
30.1500,
-0.0700,
31.1800,
-0.0700,
31.2200,
-0.0900,
32.2500,
-0.0900,
32.2900,
-0.1100,
33.3300,
-0.1000,
33.6000,
-0.0600,
34.8700,
-0.0500,
35.1400,
-0.0100,
36.4100,
0.1400,
36.8600,
0.5100,
37.0400,
0.8800,
36.8600,
1.0300,
36.4100,
1.0200,
36.1300,
0.9700,
34.8600,
0.9600,
34.5800,
0.9200,
33.3100,
0.9300,
32.9900,
0.9500,
31.6700,
1.1400,
31.7100,
2.1100,
31.9300,
3.2700,
32.1900,
3.4500,
32.2200,
4.4400,
32.3600,
5.6200,
32.5200,
5.6200,
32.9100,
5.6400,
33.9100,
5.6700,
35.3100,
5.8100,
36.3100,
6.0300,
36.8300,
6.3100,
37.0000,
6.6800,
36.8200,
6.8400,
36.3700,
6.7900,
36.1100,
PEN_UP,
PEN_UP,
44.4500,
15.6600,
PEN_DOWN,
PEN_DOWN,
44.5000,
15.7900,
44.9000,
16.8600,
44.9200,
17.0800,
45.0500,
18.3000,
44.9600,
19.0900,
44.6900,
19.6700,
44.2600,
20.0200,
43.6700,
20.1300,
43.1700,
20.0600,
42.7300,
19.8300,
42.7000,
19.8000,
42.0100,
19.0100,
41.9600,
18.8800,
41.5600,
17.8100,
41.5400,
17.6000,
41.4000,
16.3900,
41.4900,
15.6000,
41.7700,
15.0100,
42.2000,
14.6500,
42.7900,
14.5300,
43.2900,
14.6100,
43.7300,
14.8300,
43.7700,
14.8700,
44.4500,
15.6600,
PEN_UP,
PEN_UP,
46.1100,
18.3900,
PEN_DOWN,
PEN_DOWN,
46.0500,
17.9600,
45.8600,
16.5300,
45.7200,
16.2100,
45.1600,
14.9700,
44.6500,
14.3600,
44.0700,
13.9000,
43.4000,
13.6100,
42.6300,
13.5200,
41.6700,
13.7000,
40.9500,
14.2500,
40.5000,
15.1300,
40.4900,
15.2100,
40.3500,
16.2800,
40.4100,
16.7100,
40.5900,
18.1300,
40.7400,
18.4600,
41.3000,
19.7000,
41.8000,
20.3000,
42.4000,
20.7600,
43.0900,
21.0500,
43.8300,
21.1500,
44.7700,
20.9700,
45.4900,
20.4400,
45.9500,
19.5700,
45.9700,
19.4800,
46.1100,
18.3900,
PEN_UP,
PEN_UP,
51.7700,
19.6700,
PEN_DOWN,
PEN_DOWN,
51.7200,
19.6700,
51.3100,
19.7600,
50.8600,
19.7900,
50.8400,
19.7900,
49.8500,
19.5100,
49.7800,
19.4700,
48.9000,
18.8500,
48.8700,
18.7400,
48.6900,
17.7600,
48.5000,
16.7800,
48.3100,
15.7900,
48.1300,
14.8100,
47.9200,
13.7200,
47.9100,
13.7200,
46.8900,
13.7200,
46.9300,
13.9000,
47.1200,
14.8800,
47.3000,
15.8600,
47.4900,
16.8400,
47.6800,
17.8300,
47.8600,
18.8100,
48.0500,
19.7900,
48.2700,
20.9500,
48.2900,
20.9500,
49.3000,
20.9500,
49.2900,
20.9100,
49.0900,
19.8800,
49.2900,
20.0200,
50.3100,
20.7200,
51.2700,
20.9500,
51.6600,
20.9300,
52.0100,
20.8700,
51.9800,
20.7600,
51.7700,
19.6700,
PEN_UP,
PEN_UP,
54.6000,
23.7900,
PEN_DOWN,
PEN_DOWN,
54.5700,
23.6600,
54.3800,
22.6800,
53.6200,
18.7600,
53.4300,
17.7700,
53.2400,
16.7900,
52.8600,
14.8300,
52.6500,
13.7200,
52.6400,
13.7200,
51.6300,
13.7200,
51.6600,
13.8500,
51.8500,
14.8300,
52.2300,
16.7900,
52.4200,
17.7700,
52.6000,
18.7600,
53.3700,
22.6800,
53.5800,
23.7900,
53.5900,
23.7900,
54.6000,
23.7900,
PEN_UP,
PEN_UP,
59.6900,
19.6500,
PEN_DOWN,
PEN_DOWN,
58.9800,
19.9800,
58.2400,
20.0900,
57.7000,
20.0100,
57.2300,
19.7700,
57.1800,
19.7000,
56.4800,
18.8800,
56.4300,
18.7300,
56.0300,
17.6500,
56.0100,
17.4500,
55.8800,
16.2600,
55.9500,
15.5600,
56.1600,
15.0500,
56.5400,
14.7400,
57.0900,
14.6300,
58.0200,
14.9000,
58.0400,
14.9200,
58.8900,
15.5000,
58.9100,
15.6100,
59.1000,
16.5900,
59.2900,
17.5700,
59.4800,
18.5600,
59.6900,
19.6500,
PEN_UP,
PEN_UP,
61.5100,
23.7900,
PEN_DOWN,
PEN_DOWN,
61.4800,
23.6600,
61.3000,
22.6800,
60.5300,
18.7600,
60.3500,
17.7700,
60.1600,
16.7900,
59.7800,
14.8300,
59.5600,
13.7200,
59.5500,
13.7200,
58.5500,
13.7200,
58.6900,
14.4800,
58.5500,
14.3800,
57.5800,
13.7200,
56.6700,
13.5200,
55.9100,
13.6800,
55.3200,
14.1700,
54.9400,
14.9600,
54.9400,
15.0100,
54.8200,
16.0500,
54.8800,
16.5400,
55.0900,
18.0200,
55.2500,
18.3800,
55.8200,
19.6500,
56.3300,
20.2700,
56.9100,
20.7400,
57.5600,
21.0500,
58.2400,
21.1500,
59.1300,
21.0300,
59.8900,
20.6600,
59.9100,
20.7500,
60.0900,
21.7400,
60.2800,
22.7200,
60.4900,
23.7900,
60.5000,
23.7900,
61.5100,
23.7900,
PEN_UP,
PEN_UP,
0.0000,
0.0000,
};