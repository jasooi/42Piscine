ls -l | awk '{if (NR % 2 ==1 || NR ==1) print $i}'
