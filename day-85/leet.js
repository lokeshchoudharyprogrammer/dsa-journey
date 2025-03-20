/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    
    const res = {};
    this.forEach(ids => {
        const id = fn(ids);
        if (!res[id]) {
            res[id] = [];
        }
        res[id].push(ids);
    });
    return res;

};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */