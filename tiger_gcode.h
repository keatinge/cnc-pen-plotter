#include "plotter.h"
const float tiger_gcode[] PROGMEM = {
PEN_UP,
PEN_UP,
31.8900,
0.0900,
PEN_DOWN,
PEN_DOWN,
31.4600,
0.2100,
30.0600,
0.6000,
29.9200,
0.6500,
28.0400,
1.3200,
26.9700,
1.7100,
26.8400,
1.7500,
25.9100,
2.1000,
24.8500,
2.5000,
24.5400,
2.6900,
24.2500,
3.1400,
24.1300,
3.3600,
24.1200,
3.0700,
24.0600,
2.7700,
23.5200,
2.9300,
23.0300,
3.0900,
22.9500,
3.4200,
22.8100,
4.0500,
22.7500,
4.3700,
22.4800,
3.4800,
22.4200,
3.2900,
21.8200,
4.0000,
21.6500,
4.6400,
21.7500,
5.5100,
21.8700,
6.0600,
21.5300,
6.6500,
21.1900,
7.2400,
20.8400,
7.2100,
20.3900,
7.1500,
19.4000,
7.0200,
17.9700,
6.8400,
17.4600,
6.7700,
17.7000,
6.8600,
18.6400,
7.2000,
19.8100,
7.6400,
20.5600,
7.8400,
20.8200,
7.9100,
20.5200,
8.5300,
20.2100,
9.1300,
20.0100,
9.1100,
19.1100,
9.0500,
18.8400,
9.0200,
17.8400,
8.9300,
16.5800,
8.8100,
16.5000,
8.8200,
16.6900,
8.9000,
17.6000,
9.1800,
17.7200,
9.2100,
18.6900,
9.4500,
19.7900,
9.7200,
19.9500,
9.7600,
19.8400,
10.0700,
19.5900,
10.8000,
19.4500,
11.2400,
19.3700,
11.2400,
18.2800,
11.2300,
17.9200,
11.2200,
16.5600,
11.1800,
15.9800,
11.1500,
16.1300,
11.1800,
17.1100,
11.4000,
18.0800,
11.6100,
19.2100,
11.8600,
19.3000,
11.9800,
19.1200,
12.1700,
19.1100,
12.1700,
18.1300,
12.4400,
17.6900,
12.5000,
16.2500,
12.6900,
15.9600,
12.7200,
14.6600,
12.8600,
14.3400,
12.9100,
14.1200,
13.1800,
13.9700,
13.4100,
13.2500,
14.4600,
13.0300,
14.8600,
12.3300,
16.1300,
11.8900,
16.9900,
11.9200,
16.0600,
11.9300,
15.8600,
11.9900,
14.6600,
12.0200,
14.1700,
11.8600,
14.2100,
10.7200,
14.4600,
9.8500,
14.7900,
9.4000,
14.9800,
8.9100,
15.5900,
8.8500,
15.6800,
8.2600,
16.4800,
7.6000,
17.3700,
7.5500,
17.4600,
7.0300,
18.3100,
6.4500,
19.2600,
6.0800,
19.9400,
6.0700,
19.1600,
6.0700,
18.9700,
6.1000,
17.7800,
6.1300,
17.1600,
6.0200,
17.3100,
5.4400,
18.1200,
4.7400,
19.0900,
4.5000,
19.4800,
3.9800,
20.3300,
3.2100,
21.5800,
3.2100,
21.6200,
2.9700,
22.6400,
2.9500,
23.0400,
2.9000,
24.0400,
2.8400,
25.4400,
2.8800,
26.2800,
2.9000,
27.0400,
2.7700,
26.8400,
2.5500,
26.4700,
1.8200,
25.2300,
1.5400,
24.7200,
1.3700,
25.1700,
0.8700,
26.5600,
0.8600,
26.6000,
0.6200,
27.5700,
0.3800,
28.5900,
0.3700,
28.6800,
0.2300,
29.6700,
0.0900,
30.7500,
0.0900,
30.8000,
0.0500,
31.8000,
0.0100,
32.8500,
0.0400,
33.2900,
0.1600,
34.7200,
0.2400,
35.1000,
0.5300,
36.4500,
0.6600,
36.8300,
1.0900,
38.1700,
1.2700,
38.5600,
1.8600,
39.8700,
2.1000,
40.2800,
2.8300,
41.5600,
3.0000,
41.8100,
3.7700,
42.8700,
4.4400,
43.6100,
5.1200,
44.3600,
5.2300,
44.5100,
5.9800,
45.4300,
6.1800,
46.1700,
6.1000,
46.9100,
5.7100,
47.6100,
5.5400,
47.8400,
5.8100,
48.1300,
6.1200,
48.4700,
7.1200,
49.5400,
7.3100,
49.7500,
8.1700,
50.6900,
7.7900,
51.3900,
7.5500,
51.8200,
7.0800,
52.7000,
6.3700,
54.0100,
6.3500,
54.1900,
6.2500,
55.1800,
6.1400,
56.3600,
6.1500,
56.5400,
6.2000,
57.5400,
6.2400,
58.5300,
6.3000,
59.7100,
6.3200,
59.8400,
6.4500,
60.8300,
6.6000,
61.9600,
6.6100,
62.0100,
6.8100,
62.9900,
7.0200,
64.0200,
7.1300,
64.3900,
7.5200,
65.7300,
7.5800,
65.8800,
8.0600,
66.9500,
8.4800,
67.4900,
8.9700,
67.8300,
9.5400,
67.9900,
10.1500,
67.9400,
10.9400,
67.6300,
11.0600,
67.5600,
12.0400,
66.9600,
12.1000,
66.9200,
13.0300,
66.3700,
13.4200,
66.3200,
14.8000,
66.1600,
15.1600,
66.1100,
16.5100,
65.9200,
16.8300,
65.8400,
18.1300,
65.5300,
18.6900,
65.5900,
18.7800,
65.6100,
19.7500,
65.8600,
20.8000,
66.1400,
21.1500,
66.2100,
22.1300,
66.4000,
23.4600,
66.6600,
23.6700,
66.6800,
24.6700,
66.7900,
25.6600,
66.9000,
26.6600,
67.0100,
27.6500,
67.1300,
28.8600,
67.2600,
29.0700,
67.2600,
30.0700,
67.2800,
31.0700,
67.3000,
32.0700,
67.3200,
33.0700,
67.3400,
34.2900,
67.3600,
34.7000,
67.3400,
35.7000,
67.2800,
36.7000,
67.2200,
38.1100,
67.1400,
38.4000,
67.1000,
39.3900,
66.9700,
41.3700,
66.7000,
42.6600,
66.5300,
43.1300,
66.4200,
44.1000,
66.2000,
45.0800,
65.9700,
46.5200,
65.6400,
47.0500,
65.4800,
47.6200,
65.6400,
47.9300,
65.7100,
49.2200,
65.9900,
49.6200,
66.0400,
51.0200,
66.2100,
51.2600,
66.2400,
52.4800,
66.4200,
52.5000,
66.4400,
53.3700,
66.9900,
53.4400,
67.0300,
54.3500,
67.5900,
55.1400,
67.9200,
55.7900,
68.0000,
56.3700,
67.8400,
57.1400,
67.2000,
57.2300,
67.0100,
57.7700,
65.9300,
57.7700,
65.9200,
58.0400,
64.9500,
58.3000,
63.9900,
58.5600,
63.0100,
58.6000,
62.7600,
58.7400,
61.7700,
58.8900,
60.7800,
59.0700,
59.5400,
59.0800,
59.3900,
59.1300,
58.3900,
59.1700,
57.4000,
59.2300,
56.2500,
59.2200,
56.0800,
59.1500,
54.9100,
59.1500,
54.9000,
58.9600,
53.9000,
58.9100,
53.8200,
58.4300,
52.9400,
57.9400,
52.0700,
57.4100,
51.1100,
57.1900,
50.6900,
57.3800,
50.4800,
58.2400,
49.5400,
58.5500,
49.2000,
59.5500,
48.1300,
59.8200,
47.8400,
59.6500,
47.6100,
59.2600,
46.9100,
59.1800,
46.1700,
59.3800,
45.4400,
59.5300,
45.2500,
60.3200,
44.2800,
60.5300,
44.0400,
61.1800,
43.2800,
62.0400,
42.2800,
62.2500,
41.9300,
62.7700,
41.0700,
63.4900,
39.8600,
63.6500,
39.4800,
64.0400,
38.5500,
64.5900,
37.2500,
64.6600,
36.9600,
64.9000,
35.9800,
65.2000,
34.7200,
65.2200,
34.4600,
65.2700,
33.4600,
65.3400,
32.2100,
65.3100,
31.9200,
65.2200,
30.9300,
65.1200,
29.9300,
64.9900,
28.6500,
64.9600,
28.5200,
64.7000,
27.5600,
64.4400,
26.5900,
64.1400,
25.5000,
63.8300,
24.8000,
63.5200,
25.2700,
63.2900,
25.6600,
62.5500,
26.9100,
62.4900,
26.7700,
62.4900,
26.6700,
62.4900,
25.5800,
62.4900,
25.4500,
62.4500,
24.4500,
62.4000,
23.4500,
62.3500,
22.3200,
62.1400,
21.5600,
61.9800,
21.3100,
61.4300,
20.4700,
60.3500,
18.7900,
59.6500,
17.7000,
59.2300,
17.1600,
59.2600,
17.7800,
59.2600,
17.9700,
59.2900,
19.1600,
59.2800,
19.9400,
58.8800,
19.2200,
58.8400,
19.1500,
58.3200,
18.2900,
57.7600,
17.3700,
57.6900,
17.2800,
57.1000,
16.4800,
56.4400,
15.5900,
55.9600,
14.9900,
55.5200,
14.7900,
54.6400,
14.4700,
54.4800,
14.4300,
53.3400,
14.1700,
53.3900,
14.9600,
53.4000,
15.1500,
53.4500,
16.3400,
53.4500,
16.9500,
53.4400,
16.9200,
52.9700,
16.0000,
52.7600,
15.6300,
52.0700,
14.3900,
51.9400,
14.2000,
51.2400,
13.1800,
51.0300,
12.9100,
50.7100,
12.8700,
50.4100,
12.8400,
49.1200,
12.6900,
49.0200,
12.6700,
48.0200,
12.5300,
46.9300,
12.3800,
46.3400,
12.2000,
46.1200,
12.0100,
46.1100,
11.8900,
46.8500,
11.7400,
47.1400,
11.6700,
48.1200,
11.4400,
49.3800,
11.1500,
48.8700,
11.1700,
48.5200,
11.1800,
47.1800,
11.2400,
47.0900,
11.2400,
45.9900,
11.2700,
45.8000,
10.7100,
45.5300,
9.9500,
45.4500,
9.7500,
45.7900,
9.6800,
45.9200,
9.6400,
46.8800,
9.3700,
47.8400,
9.1100,
48.9400,
8.8000,
48.1500,
8.8800,
47.8000,
8.9100,
46.8100,
8.9900,
45.4600,
9.1000,
45.1900,
9.1200,
44.8900,
8.5000,
44.5900,
7.8900,
44.9900,
7.7900,
45.8200,
7.5500,
45.9200,
7.5100,
46.8600,
7.1600,
47.9000,
6.7700,
47.6600,
6.8000,
47.4800,
6.8200,
46.4900,
6.9500,
45.4900,
7.0800,
44.3200,
7.2300,
44.2100,
7.0400,
43.5900,
6.0000,
43.6800,
5.4700,
43.7600,
4.6600,
43.6000,
4.0300,
43.3000,
3.5800,
43.1300,
3.4100,
43.1000,
3.5800,
42.8600,
4.3400,
42.7700,
4.0000,
42.6500,
3.3800,
42.5700,
3.1400,
42.0500,
2.9800,
41.5100,
2.8400,
41.4700,
3.2000,
41.4700,
3.3600,
41.3200,
3.0800,
41.0700,
2.7100,
40.7400,
2.5500,
40.6100,
2.5000,
39.6700,
2.1600,
38.6100,
1.7700,
38.1900,
1.6300,
37.2500,
1.3000,
35.3500,
0.6600,
33.9900,
0.1900,
33.9300,
0.1800,
32.8700,
0.0200,
31.8900,
0.0900,
PEN_UP,
PEN_UP,
33.7200,
1.7800,
PEN_DOWN,
PEN_DOWN,
34.1700,
1.9200,
35.5800,
2.3700,
35.8300,
2.4700,
36.7600,
2.8400,
37.9300,
3.3200,
38.5700,
3.6000,
38.5700,
3.8100,
38.5000,
4.1100,
38.1600,
4.3000,
37.2000,
4.3800,
37.1800,
4.3800,
36.1800,
4.4900,
35.1600,
4.6100,
34.3500,
4.5800,
33.9900,
4.5600,
32.6300,
4.4800,
32.3100,
4.5000,
30.9900,
4.5800,
30.4500,
4.6700,
30.1200,
4.5900,
30.1000,
4.5900,
29.1100,
4.4800,
28.0900,
4.3800,
27.1400,
4.2600,
26.8100,
3.7800,
26.7800,
3.6100,
27.5600,
3.2800,
27.7700,
3.1900,
28.7000,
2.8200,
29.8500,
2.3700,
30.0300,
2.3200,
30.9800,
2.0300,
32.1200,
1.6900,
32.5100,
1.6300,
32.6200,
1.6400,
33.7200,
1.7800,
PEN_UP,
PEN_UP,
28.6800,
5.6700,
PEN_DOWN,
PEN_DOWN,
29.1100,
5.7300,
30.5400,
5.9500,
30.7700,
6.0300,
31.9600,
6.4200,
32.2200,
6.5500,
32.2200,
6.6300,
32.1900,
7.7200,
32.1800,
7.9100,
32.1200,
9.0900,
32.0300,
9.2800,
31.8400,
9.3900,
31.2700,
9.7500,
30.6900,
10.1200,
29.9500,
10.3400,
29.6200,
10.4600,
28.3500,
10.9100,
28.2400,
11.0000,
27.3200,
11.6800,
26.8400,
12.1400,
26.7700,
12.2100,
26.0600,
12.9000,
25.2700,
13.6700,
24.8300,
14.3000,
24.5000,
15.1700,
24.4100,
15.5400,
24.0600,
16.8700,
24.0500,
17.0200,
23.9500,
18.1600,
24.0600,
18.8900,
24.3900,
19.6800,
24.7600,
20.6000,
24.7800,
20.8000,
24.9100,
21.9900,
24.9500,
22.2900,
25.1000,
23.5900,
25.1100,
23.6300,
25.4100,
24.6300,
25.4300,
24.6600,
26.0100,
25.5200,
26.1100,
25.6100,
26.0900,
25.2600,
26.0800,
25.2600,
26.0100,
24.2600,
26.0100,
24.0900,
26.0100,
23.0900,
26.0100,
21.9300,
26.2100,
21.0100,
26.2200,
20.9800,
26.4100,
19.9700,
26.4100,
19.1900,
26.2000,
18.6400,
25.7900,
18.2900,
25.5100,
18.0000,
25.3600,
17.4100,
25.3600,
16.5700,
25.3700,
16.5000,
25.6000,
15.4500,
25.6800,
15.2800,
26.2200,
14.2300,
26.2700,
14.1500,
26.8200,
13.2100,
27.1300,
12.7600,
27.5200,
12.9200,
28.2600,
12.9100,
28.5500,
12.8500,
29.5400,
12.6700,
30.8200,
12.4300,
31.0800,
12.3800,
32.3300,
12.1600,
33.2300,
12.1800,
33.6800,
12.2600,
35.1000,
12.5300,
35.3600,
12.5700,
36.3500,
12.7400,
37.6000,
12.9500,
38.2300,
12.7900,
38.5300,
13.1900,
38.6000,
13.3100,
39.1700,
14.2900,
39.1700,
14.3000,
39.6600,
15.1800,
39.6800,
15.2600,
39.9700,
16.3100,
39.9700,
16.3800,
40.0000,
17.4500,
39.8500,
18.0100,
39.5800,
18.2900,
39.1800,
18.6100,
38.9700,
19.1100,
38.9300,
19.8000,
39.0700,
20.6800,
39.2600,
21.4900,
39.2800,
21.6300,
39.4100,
22.7600,
39.4000,
23.0200,
39.3400,
24.0200,
39.2800,
25.2800,
39.2500,
25.6100,
39.4700,
25.3700,
39.8600,
24.8100,
40.1500,
24.0500,
40.1700,
23.8800,
40.3100,
22.8900,
40.4700,
21.7300,
40.4800,
21.6300,
40.6100,
20.5300,
40.9800,
19.6500,
41.2800,
18.9700,
41.4100,
18.2600,
41.3700,
17.8700,
41.2200,
16.4900,
41.2200,
16.4700,
40.9300,
15.5100,
40.6400,
14.5300,
40.5900,
14.4600,
39.9900,
13.5600,
39.7200,
13.3000,
38.7400,
12.3400,
38.0800,
11.6900,
37.6300,
11.2700,
36.9800,
10.8800,
36.6000,
10.7500,
35.2700,
10.3100,
34.5600,
10.0800,
33.8800,
9.6800,
33.4000,
9.3700,
33.2300,
9.0500,
33.2200,
8.8600,
33.1700,
7.6700,
33.1700,
7.6100,
33.1400,
6.5500,
33.4000,
6.4200,
34.3300,
6.0800,
34.4700,
6.0500,
35.5800,
5.8100,
35.9000,
5.7800,
37.2200,
5.6500,
37.4900,
5.6600,
38.7600,
5.7200,
38.9800,
5.7600,
40.1700,
6.0100,
40.3400,
6.0800,
41.4200,
6.5300,
41.5500,
6.6200,
42.5100,
7.2900,
42.2400,
7.2400,
41.0000,
7.0100,
40.9300,
7.0000,
39.8700,
6.8700,
39.0900,
6.9000,
38.6100,
7.0900,
38.4200,
7.2000,
38.8100,
7.3000,
38.8800,
7.3200,
39.9100,
7.6400,
40.0500,
7.6800,
41.1600,
8.0200,
42.1200,
8.1300,
42.7600,
8.1500,
42.8000,
8.2900,
43.0200,
9.1500,
42.9400,
9.1400,
41.8800,
8.9700,
41.1600,
8.7500,
40.9100,
8.7100,
39.6700,
8.5000,
39.0200,
8.5500,
38.5400,
8.7300,
38.4300,
8.8100,
38.7100,
8.8800,
39.6600,
9.2300,
40.0300,
9.3600,
41.3500,
9.8300,
41.4700,
9.8500,
42.5800,
9.9900,
43.2800,
10.0300,
43.4400,
10.6000,
43.5900,
11.1900,
43.5300,
11.1800,
42.4700,
11.0400,
42.4000,
11.0200,
41.3700,
10.6900,
41.3400,
10.6800,
40.3400,
10.3900,
39.3700,
10.3200,
38.6900,
10.4200,
38.4800,
10.5500,
38.6800,
10.6400,
38.8100,
10.7000,
39.8700,
11.1500,
40.3000,
11.3200,
41.6700,
11.8600,
41.9100,
11.8900,
43.1500,
12.0700,
43.8400,
12.0900,
43.9500,
12.5100,
44.1000,
13.2500,
44.1200,
13.5900,
44.1800,
14.9400,
44.1500,
15.1700,
43.7700,
14.8000,
43.0400,
14.1900,
42.1800,
13.7000,
41.5800,
13.4200,
41.7400,
13.6400,
41.8200,
13.7800,
42.3800,
14.8100,
42.3800,
14.8500,
42.6200,
15.8600,
42.6300,
16.0600,
42.7100,
17.2600,
42.7100,
17.2800,
42.7300,
18.3000,
43.5200,
18.5200,
43.6100,
18.5600,
44.6400,
18.9500,
44.9100,
19.1900,
45.9000,
20.1100,
46.0100,
20.3300,
46.5500,
21.4500,
46.5900,
21.7100,
46.7900,
22.9600,
46.7900,
23.3600,
46.8800,
23.2500,
46.9300,
23.1500,
47.4700,
22.1700,
47.5200,
21.9600,
47.8000,
20.7700,
47.8400,
20.4400,
48.0200,
20.6900,
48.1100,
20.9900,
48.5000,
22.2400,
48.6100,
22.6000,
48.8800,
23.5600,
49.2600,
24.8800,
49.4700,
25.3200,
50.1100,
26.6700,
50.2400,
26.9000,
50.7200,
27.7700,
51.3300,
28.8700,
51.4800,
29.2800,
51.4100,
29.2600,
50.3800,
28.9400,
50.1400,
28.9000,
48.9100,
28.6800,
48.0700,
28.5800,
48.0700,
28.6300,
48.2900,
28.7500,
49.1600,
29.2400,
50.2500,
29.8500,
50.2800,
29.8700,
51.1600,
30.4200,
51.6600,
31.1000,
51.8300,
31.7600,
51.8300,
32.0700,
51.6100,
32.2900,
51.3700,
32.6100,
51.3500,
32.9700,
51.4000,
33.0700,
51.9100,
34.0500,
51.9700,
34.1500,
52.5200,
35.1100,
52.5600,
35.2400,
52.9100,
36.3200,
52.9500,
36.6900,
53.0900,
38.0600,
53.0500,
38.4500,
52.8800,
39.8300,
52.7400,
40.2500,
52.2800,
41.6100,
52.2800,
41.6200,
51.8000,
42.4900,
51.3000,
43.3800,
50.8900,
44.0200,
51.2700,
43.8500,
51.6400,
43.6300,
52.8700,
42.8900,
53.1200,
42.6800,
54.1600,
41.8500,
54.3400,
41.6600,
55.1900,
40.7300,
55.3100,
40.5400,
55.9600,
39.5000,
56.0100,
39.3900,
56.4400,
38.3600,
56.1900,
38.5600,
55.9100,
38.7500,
54.7800,
39.4900,
54.7500,
39.4600,
55.1100,
38.9100,
55.1700,
38.8100,
55.6800,
37.9500,
56.2600,
36.9900,
56.3900,
36.7100,
56.9500,
35.5200,
56.9600,
35.4700,
57.1300,
34.4400,
57.1200,
34.3200,
57.0700,
33.2100,
56.9900,
32.9100,
56.7600,
31.9400,
56.4400,
30.6700,
56.3400,
30.4600,
55.7900,
29.3600,
55.7300,
29.7400,
55.6600,
30.0200,
55.3600,
31.2800,
55.2600,
31.5400,
55.2000,
31.1000,
55.1200,
30.7200,
54.9200,
29.7400,
54.6500,
28.3900,
54.5200,
28.0400,
54.1800,
27.0900,
53.7100,
25.8000,
53.5400,
25.5100,
53.0200,
24.6500,
52.3300,
23.5100,
52.2600,
23.3900,
51.7600,
22.5300,
51.1800,
21.5500,
51.1800,
21.5400,
50.6900,
20.6500,
50.5800,
20.8600,
50.0900,
21.7300,
50.0400,
21.3500,
50.0400,
21.3300,
49.9500,
20.3200,
49.7100,
19.4000,
49.3600,
18.6900,
48.8300,
18.2100,
48.0100,
17.8800,
47.8800,
17.8600,
46.7800,
17.6400,
45.9500,
17.4900,
45.6600,
17.1300,
45.5800,
16.4900,
45.7000,
15.7800,
46.0300,
15.2000,
46.5800,
14.9000,
47.3000,
15.0300,
47.5400,
15.1500,
48.6800,
15.7200,
48.9300,
15.8900,
50.0300,
16.6000,
50.3300,
16.8700,
51.0800,
17.5300,
52.1400,
18.4600,
52.3000,
18.6400,
52.9600,
19.3900,
53.6200,
20.1400,
54.4500,
21.0800,
54.5700,
21.2100,
55.3800,
22.0800,
55.6600,
22.1600,
55.8700,
22.0600,
56.1000,
21.6800,
56.2200,
21.0200,
56.2100,
20.6500,
56.1600,
19.2800,
56.1300,
19.0700,
56.2200,
19.1800,
56.3700,
19.4600,
57.0000,
20.6100,
57.0600,
20.7800,
58.4000,
24.5500,
58.8000,
25.6700,
58.8800,
25.9000,
59.2800,
27.0800,
59.5300,
27.4400,
59.7800,
27.0500,
59.8000,
26.9900,
60.0400,
25.9500,
60.1500,
25.2800,
60.2200,
25.2100,
60.4000,
25.7100,
60.4700,
26.0400,
60.6800,
27.0200,
60.9700,
28.3300,
60.9900,
28.7300,
61.0600,
29.7300,
61.1300,
30.7300,
61.2300,
32.1300,
61.3000,
33.0600,
61.7700,
32.5700,
61.9300,
32.3000,
62.6200,
31.1700,
62.9700,
30.5600,
62.9500,
30.8600,
62.8700,
32.1600,
62.8100,
32.5200,
62.6700,
33.5100,
62.4600,
34.8600,
62.4200,
35.0100,
62.1500,
35.9700,
61.8300,
37.0800,
61.7400,
37.2500,
61.2700,
38.1300,
60.7200,
39.1900,
60.6400,
39.3100,
60.0900,
40.1400,
59.5400,
40.9800,
58.9200,
41.9300,
58.6100,
42.2700,
57.9400,
43.0200,
56.9700,
44.1100,
56.8400,
44.2400,
55.9900,
45.0800,
55.8100,
45.8000,
55.7800,
45.8900,
55.4700,
46.8400,
55.1200,
47.8800,
55.1000,
47.9200,
54.6400,
48.8100,
54.1600,
49.7400,
53.9300,
50.1400,
54.1100,
50.1000,
55.2700,
49.8500,
55.8300,
49.7400,
55.4800,
50.0900,
54.4400,
51.1500,
53.9800,
51.5900,
54.5700,
52.1200,
54.7500,
52.3000,
55.4600,
53.0100,
56.1700,
53.7100,
57.0500,
54.6000,
57.0600,
54.6200,
57.4700,
55.5500,
57.5000,
55.7100,
57.7000,
56.8600,
57.7000,
57.0900,
57.6700,
58.0900,
57.6500,
59.0900,
57.6100,
60.3200,
57.5800,
60.5100,
57.2700,
62.4900,
57.0900,
63.6700,
57.0600,
63.7900,
56.8400,
64.7600,
56.5800,
65.8500,
56.1900,
66.2200,
55.5700,
66.2800,
54.7000,
66.0200,
54.5700,
65.9600,
53.5400,
65.4500,
53.2100,
65.3000,
51.9700,
64.7300,
51.6200,
64.6100,
50.6800,
64.2700,
49.4000,
63.8100,
49.3100,
63.7800,
48.2900,
63.3800,
47.7700,
62.9800,
47.4000,
62.3800,
47.2700,
61.6500,
47.3800,
60.8200,
47.3800,
60.8100,
47.7300,
59.8700,
47.8600,
59.5300,
47.8300,
59.5700,
47.1800,
60.4100,
47.1300,
60.4700,
46.5100,
61.2500,
45.8900,
62.0300,
45.2200,
62.8700,
44.9500,
63.1200,
43.9500,
64.0500,
43.8800,
64.0700,
42.9400,
64.4100,
41.9300,
64.7800,
41.9200,
64.7800,
40.9500,
65.0200,
39.9800,
65.2700,
39.0000,
65.5100,
38.9400,
65.5200,
37.9500,
65.6700,
36.9000,
65.8300,
37.3000,
65.6200,
38.1900,
65.1500,
39.0700,
64.6800,
39.9500,
64.2200,
40.8400,
63.7500,
42.1300,
63.0700,
42.4400,
62.9100,
43.6500,
62.2800,
44.0900,
61.8500,
44.1000,
61.7600,
44.2800,
60.6800,
44.4000,
59.7600,
44.7000,
59.0400,
45.2700,
58.3500,
45.3600,
58.2700,
46.2100,
57.5300,
46.5500,
57.2200,
47.3000,
56.5600,
48.0500,
55.9000,
49.1400,
54.9300,
49.5600,
54.4600,
49.3900,
54.4300,
48.9300,
54.2200,
48.8000,
53.7100,
49.0500,
53.0600,
49.7300,
52.3700,
50.0300,
52.0700,
51.0500,
51.0600,
51.2500,
50.7500,
51.9800,
49.5900,
52.0200,
49.4900,
52.4100,
48.4600,
51.7900,
49.0900,
51.4300,
49.4300,
50.7100,
50.1200,
49.6300,
51.1600,
49.4200,
51.3300,
48.6300,
51.9400,
47.6300,
52.7200,
47.5700,
52.7700,
46.8100,
53.5300,
46.8100,
54.3500,
46.8100,
54.9600,
46.4000,
55.2500,
46.3300,
55.3000,
45.5500,
55.9200,
44.6900,
56.5900,
44.6300,
56.6600,
43.9700,
57.4100,
43.2600,
58.2300,
43.1400,
58.4300,
42.5500,
59.5100,
42.0400,
60.3700,
41.5300,
61.2400,
41.1200,
61.6000,
40.6100,
61.8100,
40.5400,
61.8300,
39.5800,
62.1000,
37.6500,
62.6500,
36.6200,
62.9400,
36.4800,
62.9800,
35.3900,
63.3300,
34.5300,
63.8400,
34.5200,
63.8500,
33.7700,
64.5200,
33.0100,
65.2000,
32.6800,
65.5400,
32.3500,
65.1900,
32.3400,
65.1800,
31.5900,
64.5100,
30.8200,
63.8400,
29.9700,
63.3300,
29.8300,
63.2900,
28.7400,
62.9400,
28.4800,
62.8700,
26.5600,
62.3100,
25.6000,
62.0300,
24.3800,
61.6800,
23.9500,
61.3600,
23.5200,
60.8100,
23.4000,
60.6000,
22.8100,
59.5100,
22.7000,
59.3100,
22.1100,
58.2300,
22.0300,
58.1400,
21.3700,
57.3900,
20.6300,
56.5500,
20.5800,
56.5100,
19.7900,
55.9000,
18.9500,
55.2500,
18.5600,
54.9800,
18.5500,
54.3500,
18.5500,
53.5300,
18.5000,
53.4800,
17.7300,
52.7200,
17.6800,
52.6800,
16.8900,
52.0700,
16.0400,
51.4200,
15.8000,
51.2000,
15.0700,
50.5100,
14.1000,
49.6100,
13.8800,
49.3900,
12.9400,
48.4600,
13.0700,
48.8400,
13.0800,
48.8700,
13.4900,
49.8100,
13.5100,
49.8500,
14.0600,
50.7300,
14.1100,
50.7800,
14.8000,
51.6000,
14.8700,
51.6700,
15.6800,
52.4100,
16.3100,
53.0600,
16.5700,
53.6900,
16.4600,
54.1800,
16.0000,
54.4300,
15.7800,
54.4800,
15.7900,
54.4800,
16.4900,
55.2000,
16.6500,
55.3400,
17.4100,
56.0000,
18.1600,
56.6600,
19.0700,
57.4600,
19.2300,
57.6000,
20.1500,
58.4100,
20.7200,
59.1500,
20.9700,
59.8100,
21.0800,
60.6800,
21.1700,
61.5300,
21.2900,
61.8900,
21.6100,
62.2000,
21.7600,
62.2800,
22.6500,
62.7500,
23.6800,
63.3000,
23.9800,
63.4500,
24.8700,
63.9100,
25.7600,
64.3700,
26.6500,
64.8300,
27.8300,
65.4400,
28.4300,
65.7900,
28.2700,
65.8200,
28.1500,
65.8000,
27.1600,
65.6300,
26.0500,
65.4500,
25.8500,
65.4000,
24.8800,
65.1500,
23.7000,
64.8600,
23.4900,
64.7900,
22.5400,
64.4500,
21.3900,
64.0500,
21.3200,
63.9900,
20.5000,
63.2800,
20.2400,
62.9900,
19.3300,
61.9400,
19.1000,
61.6400,
18.2600,
60.5500,
18.1700,
60.4300,
17.4700,
59.5200,
17.6500,
59.9600,
17.6500,
59.9700,
17.9700,
60.9400,
18.0500,
61.8000,
17.8700,
62.5300,
17.4500,
63.1100,
17.3400,
63.1700,
16.3400,
63.6800,
16.1600,
63.7400,
13.3600,
64.8100,
12.2500,
65.2300,
12.1700,
65.2700,
11.2700,
65.7000,
10.2900,
66.1700,
9.3800,
66.2800,
8.8100,
65.9100,
8.7300,
65.5900,
8.4000,
64.3000,
8.3300,
63.8700,
8.1600,
62.8800,
8.0000,
61.9000,
7.7700,
60.4800,
7.7500,
60.0800,
7.7000,
59.0800,
7.6300,
57.6800,
7.6400,
57.5900,
7.7600,
56.6000,
7.8900,
55.5200,
8.2100,
54.7700,
8.6700,
54.1600,
8.9800,
53.8600,
9.7000,
53.1700,
10.7300,
52.1800,
11.3900,
51.5800,
11.2700,
51.4800,
11.1000,
51.3100,
10.4000,
50.6000,
9.5200,
49.7300,
9.6600,
49.7400,
10.0500,
49.8300,
11.4200,
50.1500,
11.2000,
49.7500,
11.0000,
49.3600,
10.3200,
48.0900,
10.2300,
47.8000,
9.9100,
46.8500,
9.5000,
45.6100,
9.3800,
45.1000,
9.2400,
44.9600,
8.4000,
44.1200,
8.1000,
43.7800,
7.4300,
43.0400,
6.4600,
41.9600,
6.3800,
41.8500,
5.8300,
41.0100,
5.2800,
40.1800,
4.6600,
39.2300,
4.5600,
39.0400,
4.0900,
38.1500,
3.5300,
37.0800,
3.4400,
36.7700,
3.1800,
35.8000,
2.8300,
34.5300,
2.8100,
34.4200,
2.5600,
32.4300,
2.4200,
31.3300,
2.3900,
30.6000,
2.5300,
30.7800,
2.7500,
31.1600,
3.4800,
32.4100,
4.0700,
33.0400,
4.0800,
32.8300,
4.1500,
31.6200,
4.1700,
31.1700,
4.2400,
29.7200,
4.3700,
28.7200,
4.4900,
27.7300,
4.5500,
27.4200,
4.8300,
26.1300,
4.8300,
26.1200,
5.1800,
25.1700,
5.3000,
25.8300,
5.3400,
26.0000,
5.6100,
27.1400,
5.7600,
27.4000,
5.9100,
27.4000,
6.1000,
27.0400,
6.1500,
26.8700,
6.4700,
25.9200,
6.7800,
24.9700,
7.1500,
23.8500,
7.1900,
23.7500,
7.5500,
22.8200,
7.9200,
21.8800,
8.2800,
20.9500,
8.6800,
19.9200,
9.2100,
19.1100,
9.1800,
19.5100,
9.1800,
19.9500,
9.1800,
21.3900,
9.4200,
21.9800,
9.8000,
22.1500,
10.2100,
21.9000,
10.2200,
21.8900,
10.8800,
21.1300,
11.0700,
20.8900,
11.7200,
20.1300,
12.5600,
19.1300,
12.6800,
19.0200,
13.3900,
18.3100,
14.2100,
17.5000,
14.3600,
17.3900,
15.1600,
16.7800,
16.1100,
16.0700,
16.2100,
16.0200,
17.0900,
15.5500,
18.0700,
15.0300,
18.6500,
14.9000,
19.1200,
15.0400,
19.5800,
15.6500,
19.7600,
16.5700,
19.6400,
17.2000,
19.4000,
17.4900,
18.7000,
17.6300,
18.4900,
17.6700,
17.3000,
17.9100,
16.4500,
18.2800,
16.0100,
18.7100,
15.6700,
19.3500,
15.5900,
19.7600,
15.3400,
21.1600,
15.2800,
21.7400,
15.2300,
21.6500,
14.7000,
20.6800,
14.2000,
21.5000,
14.1500,
21.5900,
13.6400,
22.4500,
13.1200,
23.3000,
12.5600,
24.2500,
12.4600,
24.4300,
11.9800,
25.3100,
11.4000,
26.3700,
11.3500,
26.5200,
11.0300,
27.4700,
10.6600,
28.5700,
10.6300,
28.7400,
10.4300,
29.7200,
10.2000,
30.8700,
10.1000,
31.5400,
10.0000,
31.2800,
9.9300,
31.0000,
9.6300,
29.7400,
9.5700,
29.3600,
9.4700,
29.5600,
8.9200,
30.6600,
8.8500,
30.9600,
8.6100,
31.9300,
8.2900,
33.2100,
8.2800,
33.3600,
8.2400,
34.5100,
8.2500,
34.5800,
8.4500,
35.6300,
8.5700,
35.8800,
9.1100,
37.0300,
9.1500,
37.1000,
9.6700,
37.9500,
10.2300,
38.8800,
10.6300,
39.5200,
10.3300,
39.3300,
9.1900,
38.5900,
8.9200,
38.3800,
9.0100,
38.5800,
9.5100,
39.7000,
9.5700,
39.8000,
10.1800,
40.7400,
10.2700,
40.8400,
11.0200,
41.7000,
11.1500,
41.8100,
12.0400,
42.5800,
12.2200,
42.7000,
13.2300,
43.3700,
13.4200,
43.4700,
14.4900,
44.0500,
14.0500,
43.3900,
13.9000,
43.0900,
13.4400,
42.2000,
12.8300,
41.0200,
12.7200,
40.5800,
12.3600,
39.1700,
12.3400,
38.7700,
12.2900,
37.3800,
12.3800,
36.9700,
12.6600,
35.5800,
12.8200,
35.2700,
13.4400,
34.0700,
13.4900,
33.9600,
14.0000,
32.9600,
13.9800,
32.5700,
13.7600,
32.2900,
13.5500,
32.0500,
13.5200,
31.6800,
13.7100,
31.0700,
14.1500,
30.4800,
14.2700,
30.4000,
15.2400,
29.7900,
15.4200,
29.6800,
16.2900,
29.1900,
17.3400,
28.5900,
16.3500,
28.7200,
15.3600,
28.8600,
15.1000,
28.9300,
13.8800,
29.2900,
13.9800,
28.9600,
14.0900,
28.7600,
14.5700,
27.8900,
15.1600,
26.8200,
15.2600,
26.6400,
15.8300,
25.5700,
15.9400,
25.2600,
16.3900,
24.0200,
16.4300,
23.8500,
16.6800,
22.8800,
16.9800,
21.7400,
17.0400,
21.5900,
17.4500,
20.5100,
17.5500,
20.3900,
17.5600,
20.7400,
17.5700,
20.7800,
17.7600,
21.8100,
17.8100,
21.9100,
18.2700,
22.9200,
18.5300,
23.3200,
18.5700,
22.9900,
18.5800,
22.9200,
18.7000,
21.8500,
18.7300,
21.7800,
19.0900,
20.7600,
19.4900,
20.0700,
20.0400,
19.4800,
20.8000,
18.9100,
20.8600,
18.8900,
21.8600,
18.5300,
22.6400,
18.3000,
22.6400,
17.5100,
22.6600,
17.3300,
22.7600,
16.3300,
22.8800,
15.1600,
23.1800,
14.3000,
23.6100,
13.6500,
23.7700,
13.4300,
23.1700,
13.7100,
23.1400,
13.7300,
22.2400,
14.2600,
21.4800,
14.9100,
21.2100,
15.1900,
21.1800,
14.9100,
21.1900,
14.8200,
21.2100,
13.7400,
21.2300,
13.6200,
21.4100,
12.5100,
21.5200,
12.0900,
21.9000,
12.0900,
22.2500,
12.0500,
23.6000,
11.8900,
23.7000,
11.8500,
24.6300,
11.4800,
25.6700,
11.0800,
25.7100,
11.0600,
26.6800,
10.6500,
26.8800,
10.5600,
26.6700,
10.4300,
25.9900,
10.3200,
25.0100,
10.3900,
24.9800,
10.4000,
23.9800,
10.7000,
23.7500,
10.7700,
22.5700,
11.1200,
21.7700,
11.1900,
21.9300,
10.5900,
22.0900,
10.0200,
22.7800,
10.0000,
22.9200,
9.9800,
24.0500,
9.8300,
24.5100,
9.6600,
25.9200,
9.1500,
26.6500,
8.8900,
26.9300,
8.8100,
26.7700,
8.7100,
26.2700,
8.5400,
25.6200,
8.5000,
25.3300,
8.5500,
24.0700,
8.7900,
23.7500,
8.8600,
22.4500,
9.1600,
22.3400,
9.1300,
22.4000,
8.8600,
22.5300,
8.3900,
22.6000,
8.1500,
23.0900,
8.1500,
24.0600,
8.0500,
24.2400,
8.0000,
25.3700,
7.6700,
25.5200,
7.6300,
26.6200,
7.2900,
26.9400,
7.2100,
26.7500,
7.1000,
26.2700,
6.9100,
25.5200,
6.8800,
25.4700,
6.8800,
24.4300,
7.0000,
24.2900,
7.0300,
23.1600,
7.2700,
22.8500,
7.3100,
22.9500,
7.2000,
23.0900,
7.1100,
24.0600,
6.4600,
24.2900,
6.3800,
25.4500,
5.9400,
25.8200,
5.8800,
27.1800,
5.6600,
27.4300,
5.6600,
28.6800,
5.6800,
28.6800,
5.6700,
PEN_UP,
PEN_UP,
22.5900,
20.4100,
PEN_DOWN,
PEN_DOWN,
22.4100,
21.2500,
22.4000,
21.3300,
22.3600,
22.4200,
22.3700,
22.5200,
22.4600,
23.5100,
22.5600,
24.6100,
22.6700,
24.9900,
23.0900,
26.3200,
23.5600,
27.0900,
23.5700,
27.0900,
24.0200,
27.9800,
24.4700,
28.8800,
24.5400,
29.2400,
24.8000,
30.5800,
24.8100,
31.0200,
25.1800,
31.0200,
25.5600,
31.0200,
25.5700,
31.2700,
25.4600,
31.7900,
25.0000,
32.4500,
24.4100,
32.8100,
24.1800,
32.8300,
22.9500,
32.9400,
22.8400,
32.9500,
21.8500,
33.0700,
20.7500,
33.2100,
19.8700,
33.6300,
19.3400,
34.2800,
19.1700,
35.1700,
19.1900,
35.2400,
19.3700,
36.3000,
19.4700,
36.6200,
19.3800,
36.6500,
18.9800,
36.6800,
18.5400,
36.6200,
18.2200,
36.4200,
18.1000,
36.3100,
17.9800,
36.5200,
17.7700,
36.8000,
17.1500,
37.5800,
16.3200,
38.6500,
16.0600,
38.9800,
16.5100,
38.9800,
17.5100,
38.9900,
18.9600,
39.0100,
19.0400,
39.0000,
20.0300,
38.9000,
21.1000,
38.7900,
21.4600,
38.7000,
22.7900,
38.3700,
22.8000,
38.3700,
23.7200,
37.9700,
24.3600,
37.5500,
24.6200,
37.3200,
24.6700,
37.5000,
25.1000,
38.3500,
25.2600,
38.5500,
26.0600,
39.5300,
25.9900,
39.2600,
25.9800,
38.9600,
25.9500,
37.6600,
26.2800,
36.7200,
26.3900,
36.5500,
27.0700,
35.5600,
27.6400,
34.7700,
27.8700,
34.3800,
28.1200,
33.9100,
28.1500,
33.7600,
28.4000,
32.6300,
28.3900,
32.5200,
28.3800,
31.4100,
27.9500,
30.6000,
27.8800,
30.5500,
27.0500,
29.8600,
26.4300,
29.3800,
26.2300,
28.9200,
25.6200,
27.5500,
25.5500,
27.3700,
25.1100,
26.2700,
25.0900,
26.2400,
24.5700,
25.3400,
24.3600,
24.9400,
23.6900,
23.6500,
23.6200,
23.4000,
23.3400,
22.4400,
22.9800,
21.2300,
22.7500,
20.2600,
22.7000,
20.0700,
22.5900,
20.4100,
PEN_UP,
PEN_UP,
23.1400,
33.9600,
PEN_DOWN,
PEN_DOWN,
23.6200,
34.1700,
24.1400,
34.6200,
24.4600,
35.0300,
24.1500,
35.5400,
23.9800,
35.7200,
23.1200,
36.6200,
22.8900,
36.7400,
22.9100,
36.6300,
23.0000,
36.3700,
22.9600,
36.2500,
22.7200,
36.3100,
22.5200,
36.2700,
22.4000,
36.1100,
22.4800,
35.6800,
22.5600,
35.5200,
21.9100,
35.6100,
21.5800,
35.8700,
21.3700,
36.2200,
21.3100,
36.5900,
21.4300,
36.9300,
21.5200,
37.0600,
21.4300,
37.0600,
21.2700,
37.0200,
20.1400,
36.7500,
20.0000,
36.7100,
20.1300,
36.3500,
20.2500,
36.1100,
20.8200,
34.9700,
20.9000,
34.9000,
21.7300,
34.1800,
22.4500,
33.9200,
23.1400,
33.9600,
PEN_UP,
PEN_UP,
21.2300,
40.3400,
PEN_DOWN,
PEN_DOWN,
21.3200,
40.7500,
21.5400,
41.7200,
21.8500,
43.1100,
22.1400,
44.0200,
22.5100,
44.5500,
23.3200,
45.0500,
23.5400,
45.1000,
24.7400,
45.3700,
25.1300,
45.4800,
26.4900,
45.8400,
26.9000,
45.9900,
27.8400,
46.3200,
29.1900,
46.8100,
29.6100,
46.8900,
31.0100,
47.1700,
31.4000,
47.2100,
31.2700,
47.1100,
31.2400,
47.0800,
30.4100,
46.4400,
30.2500,
46.3100,
29.3000,
45.5600,
29.2300,
45.5100,
28.3300,
44.9000,
28.2200,
44.8600,
27.1700,
44.4600,
27.1600,
44.4600,
26.1900,
44.2300,
25.2000,
44.0000,
24.9600,
43.9300,
23.7600,
43.5600,
23.6100,
43.4100,
22.7400,
42.5600,
22.6700,
42.4500,
22.1200,
41.6200,
21.4900,
40.6800,
21.2700,
40.3300,
21.2300,
40.3400,
PEN_UP,
PEN_UP,
20.1900,
48.4800,
PEN_DOWN,
PEN_DOWN,
19.5000,
48.5800,
19.7800,
48.7000,
19.8200,
48.7200,
20.7500,
49.0700,
21.7300,
49.4500,
22.6000,
49.9500,
23.4800,
50.4500,
24.2300,
50.8700,
24.3000,
50.8900,
25.3400,
51.1500,
25.7100,
51.1500,
26.7100,
51.1700,
28.0800,
51.1900,
28.4400,
51.2200,
28.8700,
51.8600,
28.9300,
51.9200,
29.7200,
52.6600,
29.9000,
52.7800,
30.9300,
53.4500,
30.8100,
53.1700,
30.6300,
52.7900,
30.0200,
51.5100,
30.0000,
51.4100,
29.7900,
50.3400,
29.9200,
49.4100,
30.0200,
49.1500,
29.7000,
49.2700,
29.4500,
49.3400,
28.2500,
49.6900,
28.1100,
49.7000,
26.9700,
49.8100,
26.1800,
49.7100,
25.4500,
49.4200,
24.7500,
49.0600,
23.8600,
48.7500,
23.7700,
48.7300,
22.6900,
48.5300,
22.4400,
48.5200,
21.4400,
48.5000,
20.1900,
48.4800,
PEN_UP,
PEN_UP,
18.2100,
50.7300,
PEN_DOWN,
PEN_DOWN,
18.4200,
51.1000,
18.6000,
51.3800,
19.3000,
52.5200,
19.4800,
52.7500,
20.2700,
53.7700,
20.4300,
53.9400,
21.2900,
54.8200,
21.4100,
54.9100,
22.3200,
55.6200,
23.0400,
56.0300,
23.9000,
56.3400,
23.9100,
56.3400,
24.8900,
56.5200,
25.8700,
56.7000,
26.8600,
56.8800,
27.2400,
56.9500,
29.2100,
57.3100,
30.5800,
57.5600,
30.7900,
57.6700,
31.8700,
58.2700,
32.6300,
58.7300,
33.3500,
58.2600,
33.3800,
58.2400,
34.2600,
57.7000,
34.3800,
57.6600,
35.4600,
57.3400,
35.7600,
57.2900,
36.7400,
57.1300,
38.0300,
56.9300,
38.3200,
56.8800,
39.3000,
56.7200,
40.5800,
56.5100,
40.7700,
56.4600,
41.9100,
56.1300,
42.1100,
56.0200,
43.1700,
55.4200,
43.4200,
55.2000,
44.4200,
54.3300,
44.7100,
53.9900,
45.6400,
52.8900,
45.6700,
52.8400,
46.2100,
52.0000,
46.7800,
51.1200,
47.0500,
50.6200,
46.7800,
50.8500,
46.5100,
51.0800,
45.4900,
51.9700,
45.2300,
52.1500,
44.1700,
52.9200,
43.9500,
53.0500,
42.8600,
53.6800,
42.7000,
53.7500,
41.6200,
54.2200,
41.6000,
54.2300,
40.6000,
54.4800,
40.4400,
54.4900,
39.2800,
54.5900,
39.2600,
54.5900,
38.2600,
54.6700,
37.2400,
54.7600,
36.9400,
54.8300,
35.6700,
55.1300,
35.4100,
55.2400,
34.2400,
55.7600,
34.1600,
55.8200,
33.2500,
56.4300,
33.2300,
56.4600,
32.7700,
57.3900,
32.5700,
57.7300,
32.4000,
57.2700,
32.0100,
56.4900,
31.2500,
55.9200,
30.9700,
55.7900,
29.7900,
55.2200,
29.5000,
55.1400,
28.2400,
54.8000,
28.0800,
54.7800,
27.0900,
54.6900,
25.9300,
54.5800,
25.7600,
54.5700,
24.5900,
54.4800,
24.5700,
54.4700,
23.5800,
54.2100,
23.4500,
54.1500,
22.4000,
53.7000,
22.2000,
53.5900,
21.1400,
52.9700,
21.1000,
52.9400,
20.3000,
52.3300,
19.5100,
51.7200,
18.6800,
51.0800,
18.2500,
50.6900,
18.1200,
50.5800,
18.2100,
50.7300,
PEN_UP,
PEN_UP,
12.0300,
52.3300,
PEN_DOWN,
PEN_DOWN,
11.9700,
52.4200,
11.4000,
53.2400,
10.7700,
54.1500,
10.6300,
54.4400,
10.1800,
55.3400,
9.5900,
56.5300,
9.3400,
57.1500,
9.3700,
57.7600,
9.3800,
57.8400,
9.4600,
58.9100,
9.5100,
59.4700,
9.2300,
59.1800,
8.9600,
58.8700,
8.9500,
58.9700,
8.8800,
59.9600,
8.8100,
61.0600,
8.8200,
61.1900,
9.0200,
64.1800,
9.1000,
65.3100,
9.2300,
65.4100,
9.8700,
65.0600,
10.0400,
64.9300,
11.0000,
64.1800,
11.1200,
64.0800,
11.8600,
63.4100,
12.6000,
62.7300,
13.4500,
61.9600,
13.6600,
61.7100,
14.5300,
60.7100,
14.6000,
60.6000,
15.1900,
59.6400,
15.3300,
59.2200,
15.7800,
57.8400,
15.8400,
57.0000,
15.6400,
56.2500,
15.1700,
55.5700,
14.4200,
54.9400,
14.2000,
54.7400,
13.2500,
53.8700,
13.1300,
53.6400,
12.5300,
52.5300,
12.3200,
52.1300,
12.0300,
52.3300,
PEN_UP,
PEN_UP,
14.7900,
35.1400,
PEN_DOWN,
PEN_DOWN,
14.5100,
35.5200,
14.4700,
35.6100,
13.9700,
36.5900,
13.9500,
36.6900,
13.7100,
37.7700,
13.7100,
37.8900,
13.7100,
39.0100,
13.7400,
39.1500,
13.9900,
40.2600,
14.1800,
40.6800,
14.7800,
42.0100,
14.9500,
42.2400,
15.7200,
43.2700,
15.7700,
43.3000,
16.7000,
43.8200,
17.3200,
44.1800,
17.9700,
44.8600,
18.2500,
45.1300,
19.2300,
46.1100,
19.7800,
46.4200,
20.3200,
46.5600,
20.5700,
46.5900,
20.4600,
46.4400,
20.4600,
46.4200,
19.9600,
45.5500,
19.4600,
44.6700,
19.3900,
44.5600,
18.8900,
43.6900,
18.3200,
42.7100,
17.5900,
42.0300,
17.5400,
41.9900,
16.7400,
41.3000,
16.6600,
41.2000,
15.9300,
40.3400,
15.9200,
40.3200,
15.4800,
39.4100,
15.4600,
39.2500,
15.3200,
38.2500,
15.1700,
37.1000,
15.1600,
37.0600,
15.0400,
36.0600,
14.9200,
35.0300,
14.7900,
35.1400,
PEN_UP,
PEN_UP,
43.1400,
34.0300,
PEN_DOWN,
PEN_DOWN,
43.1900,
34.0600,
44.0800,
34.6400,
44.1300,
34.7100,
44.7600,
35.6000,
44.7800,
35.6800,
45.1400,
36.7100,
44.9400,
36.7600,
43.7700,
37.0500,
43.6700,
37.0500,
43.7600,
36.9300,
43.8700,
36.4100,
43.6200,
35.8500,
43.1100,
35.5500,
42.6300,
35.5400,
42.6200,
35.5800,
42.7600,
35.7700,
42.7900,
36.1200,
42.5900,
36.3100,
42.2300,
36.2500,
42.1800,
36.3500,
42.2700,
36.6000,
42.3300,
36.7400,
42.1500,
36.6600,
41.6600,
36.2600,
41.4800,
36.0400,
40.6900,
35.0300,
41.0700,
34.6100,
41.5700,
34.1800,
42.0700,
33.9500,
42.1100,
33.9500,
43.1400,
34.0300,
PEN_UP,
PEN_UP,
43.7600,
40.6100,
PEN_DOWN,
PEN_DOWN,
43.5700,
40.9100,
42.8300,
42.0600,
42.7100,
42.2200,
41.9500,
43.1500,
41.1800,
43.6800,
40.9200,
43.7500,
39.7000,
44.0700,
39.5300,
44.1200,
38.5600,
44.3700,
37.4100,
44.6700,
37.1800,
44.8000,
36.0800,
45.4300,
35.8400,
45.6200,
34.8100,
46.4300,
34.7300,
46.4900,
33.8700,
47.1800,
34.2700,
47.1200,
35.6700,
46.9000,
36.0000,
46.7900,
36.9400,
46.4600,
38.2200,
46.0300,
38.3800,
45.9700,
39.4700,
45.5700,
39.4800,
45.5700,
40.4700,
45.3600,
40.8300,
45.2700,
42.1700,
44.9300,
42.6600,
44.5800,
43.0300,
44.1300,
43.1400,
43.7100,
43.3900,
42.7400,
43.7600,
41.3500,
43.7700,
41.3100,
43.9900,
40.2900,
44.0000,
40.2100,
43.7600,
40.6100,
PEN_UP,
PEN_UP,
43.1600,
48.4600,
PEN_DOWN,
PEN_DOWN,
42.5700,
48.5300,
42.3800,
48.5700,
41.2000,
48.7900,
41.0900,
48.8400,
40.0600,
49.2700,
39.9800,
49.3000,
38.9800,
49.7200,
38.9200,
49.7200,
37.8500,
49.8100,
37.8000,
49.8000,
36.8200,
49.5900,
35.7900,
49.3700,
35.2200,
49.1700,
35.2800,
49.3700,
35.4200,
49.9900,
35.3800,
50.7300,
35.2400,
51.1500,
34.7500,
52.5100,
34.3600,
53.2400,
34.2200,
53.4800,
34.4800,
53.3300,
34.7600,
53.1300,
35.8500,
52.3600,
35.9500,
52.2300,
36.7100,
51.3500,
36.8100,
51.1600,
37.1600,
51.2000,
37.4500,
51.2000,
38.4500,
51.1800,
39.7300,
51.1700,
39.9700,
51.1100,
41.1700,
50.8100,
41.6800,
50.4900,
41.7400,
50.4500,
42.6100,
49.9500,
43.5300,
49.4100,
43.6700,
49.3600,
44.6100,
49.0200,
45.6900,
48.6300,
45.7400,
48.5900,
45.4900,
48.5400,
45.3200,
48.5300,
44.3200,
48.5000,
43.1600,
48.4600,
PEN_UP,
PEN_UP,
52.6900,
51.6500,
PEN_DOWN,
PEN_DOWN,
52.5300,
52.0500,
52.4200,
52.2400,
51.8400,
53.3200,
51.6500,
53.5000,
50.7300,
54.3600,
50.7200,
54.3700,
49.9300,
55.0300,
49.4500,
55.6700,
49.2300,
56.6500,
49.4600,
57.6100,
49.4700,
57.6300,
50.0300,
58.4500,
50.6000,
59.3000,
50.9000,
59.7600,
50.4300,
59.6000,
50.0700,
59.4800,
50.1500,
59.6000,
50.3200,
59.8100,
50.9600,
60.5800,
51.7700,
61.5700,
51.8900,
61.6800,
52.6400,
62.3500,
53.3800,
63.0200,
54.2600,
63.8000,
54.4500,
63.9400,
55.4700,
64.6500,
55.8000,
64.7000,
56.0300,
64.5600,
56.3000,
63.8200,
56.3000,
63.5500,
56.3400,
62.2900,
56.3300,
61.9700,
56.2800,
60.9700,
56.2400,
59.9700,
56.1800,
58.6500,
56.1400,
58.4400,
55.9100,
57.2400,
55.8600,
57.1100,
55.5100,
56.0300,
55.4200,
55.7700,
56.0100,
56.1200,
56.5700,
56.4700,
56.4700,
56.1600,
56.4700,
56.1500,
56.0300,
55.2500,
55.5900,
54.3400,
55.3000,
53.9600,
54.3900,
52.7900,
54.1300,
52.5900,
53.0900,
51.7800,
52.8700,
51.6400,
52.6900,
51.6500,
PEN_UP,
PEN_UP,
50.4300,
35.0400,
PEN_DOWN,
PEN_DOWN,
50.4200,
35.1000,
50.3100,
36.0900,
50.1900,
37.1400,
50.1800,
37.2300,
50.0400,
38.2200,
49.8900,
39.3000,
49.5600,
40.1500,
49.5200,
40.2000,
48.8800,
41.0400,
48.7000,
41.2000,
47.7700,
42.0200,
47.7200,
42.0700,
46.9500,
42.8200,
46.7500,
43.1800,
46.0400,
44.4100,
45.9900,
44.5100,
45.5000,
45.3800,
44.9600,
46.3500,
44.8600,
46.5700,
45.7300,
46.3500,
46.4400,
45.8600,
46.5300,
45.7700,
47.3000,
44.9600,
47.3400,
44.9300,
48.0600,
44.1700,
48.8100,
43.7600,
49.3800,
43.4700,
49.8100,
43.1000,
50.3900,
42.2900,
50.4400,
42.1900,
50.9400,
41.2000,
50.9800,
41.0700,
51.3800,
40.0000,
51.4000,
39.9100,
51.6400,
38.8500,
51.5800,
37.9000,
51.5000,
37.6700,
51.1100,
36.4900,
50.9800,
36.2200,
50.4300,
35.0400,
PEN_UP,
PEN_UP,
42.3600,
20.6800,
PEN_DOWN,
PEN_DOWN,
42.2400,
21.1100,
41.9700,
22.0700,
41.5800,
23.4600,
41.5500,
23.5100,
41.1000,
24.4000,
40.6300,
25.3500,
40.6300,
25.3600,
40.1100,
26.2200,
39.9900,
26.5400,
39.5000,
27.7900,
39.3200,
28.1700,
38.7200,
29.4500,
38.1600,
29.8600,
37.4400,
30.4200,
37.0000,
30.9900,
36.8000,
31.6300,
36.7900,
32.4400,
36.8000,
32.5100,
36.9800,
33.5600,
37.3200,
34.3500,
37.5700,
34.7800,
37.8900,
35.2500,
38.1400,
35.6100,
38.9600,
36.7900,
39.0000,
36.9400,
39.3300,
38.0500,
39.3100,
38.2000,
39.2000,
39.3400,
39.1900,
39.5100,
39.5900,
39.0200,
39.6300,
38.9700,
40.2600,
38.1100,
40.5400,
37.5000,
40.6100,
37.3500,
40.7900,
37.4900,
41.4600,
37.9700,
41.5500,
38.0100,
42.5700,
38.4200,
42.7300,
38.4600,
43.8600,
38.7500,
44.1800,
38.7900,
45.4900,
38.9600,
45.8200,
38.9600,
47.8200,
38.9800,
49.1500,
38.9900,
48.8200,
38.5600,
48.6700,
38.3800,
48.0500,
37.5900,
47.2900,
36.6200,
47.1000,
36.3200,
47.0200,
36.4100,
46.7000,
36.6100,
46.1900,
36.6800,
45.8000,
36.6400,
45.8600,
36.2300,
45.8700,
36.2100,
46.0400,
35.2100,
45.9200,
34.3900,
45.5000,
33.7600,
44.7700,
33.3100,
43.8900,
33.0900,
43.5900,
33.0600,
42.2900,
32.9400,
42.0300,
32.9200,
40.7900,
32.8000,
40.2100,
32.4300,
39.7300,
31.7600,
39.6200,
31.1400,
39.6500,
30.9800,
40.0300,
31.0000,
40.4100,
31.0200,
40.3900,
30.7100,
40.4600,
29.9100,
40.7100,
28.9700,
40.7400,
28.9100,
41.1800,
28.0200,
41.6600,
27.0700,
42.1300,
26.2900,
42.1400,
26.2600,
42.4900,
25.2900,
42.5300,
25.0900,
42.7700,
23.9200,
42.7700,
23.4500,
42.7700,
22.4500,
42.7700,
20.9900,
42.5100,
20.1300,
42.3600,
20.6800,
PEN_UP,
PEN_UP,
0.0000,
0.0000,
};