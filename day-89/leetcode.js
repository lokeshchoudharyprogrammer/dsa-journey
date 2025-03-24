/**
 * @param {number} days
 * @param {number[][]} meetings
 * @return {number}
 */
var countDays = function(days, meetings) {
  
    meetings.sort((a, b) => a[0] - b[0]);
  
    let meetdays = 0;
    let meetend = 0;
  
    for (const [start, end] of meetings) {
      if (start > meetend) {
        meetdays += (end - start + 1);
        meetend = end;
      } else if (end > meetend) {
        meetdays += (end - meetend);
        meetend = end;
      }
    }
  
    return days - meetdays;
  };