document.addEventListener('DOMContentLoaded', () => {
    
    const bird = document.querySelector('.bird')
    const gameDisplay = document.querySelector('.game-container')
    const ground = document.querySelector('.ground')

    let birdleft = 220
    let birdbottom = 100
    let gravity = 2

    function startgame(){
        birdbottom -= gravity
        bird.style.bottom = birdbottom + 'px'
        bird.style.left = birdleft + 'px'
    }
    
    let timeId = setInterval(startgame, 20)

    function jump() {
        if (birdbottom <= 500)
            birdbottom += 50
        bird.style.bottom = birdbottom + 'px'
        console.log(birdbottom)
    }

    function generateObstacle() { 
        const obstacle = document.createElement('div')
        obstacle .classList.add('.obstacle')
        gameDisplay.appendChild(obstacle)
    }

    function control(e) {
        if (e.keyCode == 32) {
            jump()
        }
    }

    document.addEventListener('keyup', control)

})